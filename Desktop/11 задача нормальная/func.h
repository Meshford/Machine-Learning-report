#pragma once
#ifndef FUNC_H
#define FUNC_H

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
class func
{
private:
	double x, h, eps;
	vector<double> v, parametrs;
	vector<int> count;
public:

	func(double X, vector<double> V, double H, double eps);
	vector<double> RunKut4(double X, vector<double> V, double H);
	vector<double> Function(double X, vector<double> V);
	double max(vector<double> Vector);
	//void GetParamerts(double L,double EI,double P);
	vector<double> ComplitWithoutControl();
	vector<double> ComplitWithControl();
	vector<double> RightBorderControl(double xmax);
	void TakeParamerts(vector<double> p) { parametrs = p; }
	vector<int> GetCounts() { return count; }
	void ChangeX(double X) { x = X; }
	void ChangeH(double H) { h = H; }
	void ChangeCounts(vector<int> Count) { count = Count; }
	void ChangeV(vector<double> V) { v = V; }
	void ChangeAll(vector<double> All);
	vector<double> minus(const vector<double>& A, const vector<double>& B);
	vector<double> plus(const vector<double>& A, const vector<double>& B);
	vector<double> multiply(const vector<double>& A, const double& b);
	vector<double> divide(const vector<double>& A, const double& b);
	~func();

};
#endif
