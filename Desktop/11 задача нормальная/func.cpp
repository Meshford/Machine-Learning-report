#include "func.h"

func::func(double X, vector<double> V, double H, double ep)
{
	vector<int> sup(2);
	x = X;
	v = V;
	h = H;
	eps = ep;
	parametrs;
	count = sup;
}


vector<double> func::RunKut4(double X, vector<double> V, double H)
{
	int k = v.size();
	vector<double> k1(k), k2(k), k3(k), k4(k), res(k);
	k1 = Function(X, V);
	k2 = Function(X + H / 2, plus(V ,multiply(k1,H / 2)) );
	k3 = Function(X + H / 2, plus(V ,multiply(k2, H / 2)) );
	k4 = Function(X + H, plus(V,multiply(k3, H)) );
	res = plus(V, multiply(plus(plus(k1, multiply(k2, 2)), plus(k4, multiply(k3, 2))), H / 6));
	return res;
}
vector<double> func::minus(const vector<double>& A, const vector<double>& B) {
	vector<double> res(A.size());
	if (A.size() != B.size()) {
		exception("no");
	}
	for (int i = 0; i < A.size(); i++)
	{
		res[i] = A[i]-B[i];
	}
	return res;
}

vector<double> func::plus(const vector<double>& A, const vector<double>& B) {
	vector<double> res(A.size());
	if (A.size() != B.size()) {
		exception("no");
	}
	for (int i = 0; i < A.size(); i++)
	{
		res[i] = A[i] + B[i];
	}
	return res;
}

vector<double> func::multiply(const vector<double>& A, const double &b) {
	vector<double> res(A.size());
	for (int i = 0; i < A.size(); i++)
	{
		res[i] = A[i] *b;
	}
	return res;
}
vector<double> func::divide(const vector<double>& A, const double& b) {
	vector<double> res(A.size());
	if (b==0) {
		exception("no");
	}
	for (int i = 0; i < A.size(); i++)
	{
		res[i] = A[i] /b;
	}
	return res;
}








double func::max(vector<double> vector)
{
	double res = vector[0];
	for (int i = 1; i < v.size(); i++)
	{
		if (vector[i] > res)
			res = vector[i];
	}
	return res;
}




//void func::GetParamerts(double L, double EI, double P)
//{
	//parametrs[0] = L;
	//parametrs[1] = EI;
	//parametrs[2] = P;
	
//}

vector<double>func::ComplitWithoutControl()
{
	vector<double> res(v.size() + 2);
	v = RunKut4(x, v, h);
	x = x + h;
	for (int i = 0; i < v.size(); i++)
	{
		res[i] = v[i];
	}
	//res[v.Size] - координата х
	res[v.size()] = x;
	//res[v.Size() + 1] - шаг h
	res[v.size() + 1] = h;
	return res;
}

vector<double> func::ComplitWithControl()
{
	//count[0] - число делений, count[1] - число умножений
	vector<double> S(v.size()), V(v.size()), prev(v.size());//размер будет 2
	vector<double> res(v.size() * 2 + 5);// у рез размер 9
	double H = h;
	prev = v;
	// Vn+1/2
	V = RunKut4(x, v, h / 2); 
	//V - Vn+1 с двумя крышечками (полученное с шагом h/2)
	V = RunKut4(x + h / 2, V, h / 2);
	//v - Vn+1 вычисленное с шагом h
	v = RunKut4(x, v, h);
	S = divide(minus(V, v), 15); //15=2^p-1, p=4
	//Берем модуль погрешности
	for (int i = 0; i < v.size(); i++)
	{
		S[i] = fabs(S[i]);
	}
	//Находим max S
	S[0] = max(S);

	x = x + h;
	if (S[0] < eps / 32)
	{
		h = h * 2;
		count[1]++;
	}
	else
	{
		if (S[0] > eps)
		{
			x = x - h;
			v = prev;
			h = h / 2;
			count[0]++;
		}
	}
	//Записывает численное решение с шагом h
	for (int j = 0; j < v.size(); j++)
		res[j] = v[j]; //[0]vi [1]v'i
	//Записывает численное решение, полученное двойным ходом с шагом h/2
	for (int j = 0; j < v.size(); j++)
		res[j + v.size()] = V[j]; //[2]v2i [3]v2i'
	//Записывает локальную погрешность, координату, шаг, счётчик делений и счётчик умножений
	res[v.size() * 2] = S[0];
	res[v.size() * 2 + 1] = x;
	res[v.size() * 2 + 2] = H;
	res[v.size() * 2 + 3] = count[0];
	res[v.size() * 2 + 4] = count[1];
	return res;
}


vector<double> func::RightBorderControl(double xmax)
{
	vector<double> res(2 * v.size() + 5), prev(v.size());
	double H;
	prev = v;
	//Вызываем метод с контролем ЛП
	res = ComplitWithControl();
	//Берём шаг
	H = res[v.size() * 2 + 2];
	//Это нужно, чтобы контроль ЛП и контроль выхода на границу не конфликтовали
	if (h == 2 * H)
	{
		h /= 2;
		count[1]--;
		res[v.size() * 2 + 4] = count[1];
	}
	//Если новое значение выходит за границу, то возвращаемся к предыдущему
	if (x > xmax)
	{
		v = prev;
		x = x - h;
		h = h / 2;
		count[0]++;
		for (int j = 0; j < v.size(); j++)
			res[j] = v[j];
		res[v.size() * 2 + 1] = x;
		res[v.size() * 2 + 3] = count[0];
	}
	return res;
}

vector<double> func::Function(double X, vector<double> V)
{
	vector<double> res(V.size());
	res[0] = V[1];
	res[1] = (pow(parametrs[0], -1) - X * pow(parametrs[0], -2)) * parametrs[2] * pow(parametrs[0], 2) * pow(parametrs[1], -1) * pow(1 + pow(V[1], 2), 3 / 2);

	return res;
}
void func::ChangeAll(vector<double> All)
{
	for (int j = 0; j < v.size(); j++)
	{
		v[j] = All[j];
	}
	x = All[v.size() * 2 + 1];
	h = All[v.size() * 2 + 2];
	count[0] = All[v.size() * 2 + 3];
	count[1] = All[v.size() * 2 + 4];
}

func::~func()
{

}