#pragma once
#include <math.h>
#include <vector>
#include <string>
#include <iostream>
#include "func.h"
#include "MyForm1.h"
#include "MyForm3.h"
using namespace std;
using namespace System::IO;
namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Data;
	using namespace System::Windows::Forms;
	using namespace System::Drawing;
	using namespace ZedGraph;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		MyForm1^ gform = gcnew MyForm1;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox5;

		   MyForm3^ gform3 = gcnew MyForm3;
	public:
		MyForm(void)
		{
			InitializeComponent();
			DrawGraph();
			//
			//TODO: Add the constructor code here
			//
		}


		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;
	protected:

	protected:

	private: System::Windows::Forms::Button^ butt_draw;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::Label^ label_e;
	private: System::Windows::Forms::TextBox^ textBox_E;

	private: System::Windows::Forms::Label^ label_u0;
	private: System::Windows::Forms::TextBox^ textBox_u0;
	private: System::Windows::Forms::Label^ label_x0;
	private: System::Windows::Forms::TextBox^ textBox_x0;










	private: System::Windows::Forms::TextBox^ textBox_kol_vo_shag;
	private: System::Windows::Forms::Label^ label_kol_vo_shagov;
	private: System::Windows::Forms::TextBox^ textBox_h;





	private: System::Windows::Forms::Label^ label_h;





	protected:
	private: System::ComponentModel::IContainer^ components;

	private:























	private: System::Windows::Forms::Label^ label1;




















	private: System::Windows::Forms::Label^ label4;












private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ textBox1;













private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ textBox2;





private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: ZedGraph::ZedGraphControl^ zedGraphControl2;
private: ZedGraph::ZedGraphControl^ zedGraphControl3;












private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label9;













private: System::Windows::Forms::ImageList^ imageList1;
private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Label^ label10;












private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label14;












private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ i;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ idXi;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ idVi;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ V22;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ V2i;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vi2i;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ OLP;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Hi;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ C1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ C2;

















































































































		   double e;

		   /// <summary>
		   /// Required designer variable.
		   /// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			   this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			   this->butt_draw = (gcnew System::Windows::Forms::Button());
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->idXi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->idVi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->V22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->V2i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Vi2i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->OLP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Hi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->C1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->C2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->label_e = (gcnew System::Windows::Forms::Label());
			   this->textBox_E = (gcnew System::Windows::Forms::TextBox());
			   this->label_u0 = (gcnew System::Windows::Forms::Label());
			   this->textBox_u0 = (gcnew System::Windows::Forms::TextBox());
			   this->label_x0 = (gcnew System::Windows::Forms::Label());
			   this->textBox_x0 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox_kol_vo_shag = (gcnew System::Windows::Forms::TextBox());
			   this->label_kol_vo_shagov = (gcnew System::Windows::Forms::Label());
			   this->textBox_h = (gcnew System::Windows::Forms::TextBox());
			   this->label_h = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->label12 = (gcnew System::Windows::Forms::Label());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->label13 = (gcnew System::Windows::Forms::Label());
			   this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			   this->zedGraphControl3 = (gcnew ZedGraph::ZedGraphControl());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			   this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->label14 = (gcnew System::Windows::Forms::Label());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->label15 = (gcnew System::Windows::Forms::Label());
			   this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // zedGraphControl1
			   // 
			   resources->ApplyResources(this->zedGraphControl1, L"zedGraphControl1");
			   this->zedGraphControl1->Name = L"zedGraphControl1";
			   this->zedGraphControl1->ScrollGrace = 0;
			   this->zedGraphControl1->ScrollMaxX = 0;
			   this->zedGraphControl1->ScrollMaxY = 0;
			   this->zedGraphControl1->ScrollMaxY2 = 0;
			   this->zedGraphControl1->ScrollMinX = 0;
			   this->zedGraphControl1->ScrollMinY = 0;
			   this->zedGraphControl1->ScrollMinY2 = 0;
			   this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			   // 
			   // butt_draw
			   // 
			   this->butt_draw->BackColor = System::Drawing::Color::PaleGreen;
			   resources->ApplyResources(this->butt_draw, L"butt_draw");
			   this->butt_draw->ForeColor = System::Drawing::SystemColors::ControlText;
			   this->butt_draw->Name = L"butt_draw";
			   this->butt_draw->UseVisualStyleBackColor = false;
			   this->butt_draw->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(12) {
				   this->i, this->idXi,
					   this->idVi, this->V22, this->V2i, this->Column1, this->Vi2i, this->Column2, this->OLP, this->Hi, this->C1, this->C2
			   });
			   resources->ApplyResources(this->dataGridView1, L"dataGridView1");
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->RowHeadersVisible = false;
			   this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			   // 
			   // i
			   // 
			   this->i->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			   resources->ApplyResources(this->i, L"i");
			   this->i->Name = L"i";
			   this->i->ReadOnly = true;
			   // 
			   // idXi
			   // 
			   resources->ApplyResources(this->idXi, L"idXi");
			   this->idXi->Name = L"idXi";
			   this->idXi->ReadOnly = true;
			   // 
			   // idVi
			   // 
			   resources->ApplyResources(this->idVi, L"idVi");
			   this->idVi->Name = L"idVi";
			   this->idVi->ReadOnly = true;
			   this->idVi->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			   // 
			   // V22
			   // 
			   resources->ApplyResources(this->V22, L"V22");
			   this->V22->Name = L"V22";
			   // 
			   // V2i
			   // 
			   resources->ApplyResources(this->V2i, L"V2i");
			   this->V2i->Name = L"V2i";
			   // 
			   // Column1
			   // 
			   resources->ApplyResources(this->Column1, L"Column1");
			   this->Column1->Name = L"Column1";
			   // 
			   // Vi2i
			   // 
			   resources->ApplyResources(this->Vi2i, L"Vi2i");
			   this->Vi2i->Name = L"Vi2i";
			   // 
			   // Column2
			   // 
			   resources->ApplyResources(this->Column2, L"Column2");
			   this->Column2->Name = L"Column2";
			   // 
			   // OLP
			   // 
			   resources->ApplyResources(this->OLP, L"OLP");
			   this->OLP->Name = L"OLP";
			   // 
			   // Hi
			   // 
			   resources->ApplyResources(this->Hi, L"Hi");
			   this->Hi->Name = L"Hi";
			   // 
			   // C1
			   // 
			   resources->ApplyResources(this->C1, L"C1");
			   this->C1->Name = L"C1";
			   // 
			   // C2
			   // 
			   resources->ApplyResources(this->C2, L"C2");
			   this->C2->Name = L"C2";
			   // 
			   // label_e
			   // 
			   resources->ApplyResources(this->label_e, L"label_e");
			   this->label_e->Name = L"label_e";
			   this->label_e->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			   // 
			   // textBox_E
			   // 
			   resources->ApplyResources(this->textBox_E, L"textBox_E");
			   this->textBox_E->Name = L"textBox_E";
			   this->textBox_E->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			   // 
			   // label_u0
			   // 
			   resources->ApplyResources(this->label_u0, L"label_u0");
			   this->label_u0->Name = L"label_u0";
			   this->label_u0->Click += gcnew System::EventHandler(this, &MyForm::label_u0_Click);
			   // 
			   // textBox_u0
			   // 
			   resources->ApplyResources(this->textBox_u0, L"textBox_u0");
			   this->textBox_u0->Name = L"textBox_u0";
			   // 
			   // label_x0
			   // 
			   resources->ApplyResources(this->label_x0, L"label_x0");
			   this->label_x0->Name = L"label_x0";
			   this->label_x0->Tag = L"";
			   this->label_x0->Click += gcnew System::EventHandler(this, &MyForm::label_x0_Click);
			   // 
			   // textBox_x0
			   // 
			   resources->ApplyResources(this->textBox_x0, L"textBox_x0");
			   this->textBox_x0->Name = L"textBox_x0";
			   // 
			   // textBox_kol_vo_shag
			   // 
			   resources->ApplyResources(this->textBox_kol_vo_shag, L"textBox_kol_vo_shag");
			   this->textBox_kol_vo_shag->Name = L"textBox_kol_vo_shag";
			   this->textBox_kol_vo_shag->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_kol_vo_shag_TextChanged);
			   // 
			   // label_kol_vo_shagov
			   // 
			   resources->ApplyResources(this->label_kol_vo_shagov, L"label_kol_vo_shagov");
			   this->label_kol_vo_shagov->Name = L"label_kol_vo_shagov";
			   // 
			   // textBox_h
			   // 
			   resources->ApplyResources(this->textBox_h, L"textBox_h");
			   this->textBox_h->Name = L"textBox_h";
			   this->textBox_h->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			   // 
			   // label_h
			   // 
			   resources->ApplyResources(this->label_h, L"label_h");
			   this->label_h->Name = L"label_h";
			   this->label_h->Click += gcnew System::EventHandler(this, &MyForm::label_h_Click);
			   // 
			   // label1
			   // 
			   resources->ApplyResources(this->label1, L"label1");
			   this->label1->Name = L"label1";
			   this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			   // 
			   // label4
			   // 
			   resources->ApplyResources(this->label4, L"label4");
			   this->label4->Name = L"label4";
			   this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			   // 
			   // label3
			   // 
			   resources->ApplyResources(this->label3, L"label3");
			   this->label3->Name = L"label3";
			   this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click_1);
			   // 
			   // label5
			   // 
			   resources->ApplyResources(this->label5, L"label5");
			   this->label5->Name = L"label5";
			   this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			   // 
			   // textBox1
			   // 
			   resources->ApplyResources(this->textBox1, L"textBox1");
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_1);
			   // 
			   // label7
			   // 
			   resources->ApplyResources(this->label7, L"label7");
			   this->label7->Name = L"label7";
			   // 
			   // textBox2
			   // 
			   resources->ApplyResources(this->textBox2, L"textBox2");
			   this->textBox2->Name = L"textBox2";
			   // 
			   // label12
			   // 
			   resources->ApplyResources(this->label12, L"label12");
			   this->label12->Name = L"label12";
			   // 
			   // textBox3
			   // 
			   resources->ApplyResources(this->textBox3, L"textBox3");
			   this->textBox3->Name = L"textBox3";
			   // 
			   // label13
			   // 
			   resources->ApplyResources(this->label13, L"label13");
			   this->label13->Name = L"label13";
			   // 
			   // textBox4
			   // 
			   resources->ApplyResources(this->textBox4, L"textBox4");
			   this->textBox4->Name = L"textBox4";
			   // 
			   // pictureBox1
			   // 
			   resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->TabStop = false;
			   // 
			   // zedGraphControl2
			   // 
			   resources->ApplyResources(this->zedGraphControl2, L"zedGraphControl2");
			   this->zedGraphControl2->Name = L"zedGraphControl2";
			   this->zedGraphControl2->ScrollGrace = 0;
			   this->zedGraphControl2->ScrollMaxX = 0;
			   this->zedGraphControl2->ScrollMaxY = 0;
			   this->zedGraphControl2->ScrollMaxY2 = 0;
			   this->zedGraphControl2->ScrollMinX = 0;
			   this->zedGraphControl2->ScrollMinY = 0;
			   this->zedGraphControl2->ScrollMinY2 = 0;
			   // 
			   // zedGraphControl3
			   // 
			   resources->ApplyResources(this->zedGraphControl3, L"zedGraphControl3");
			   this->zedGraphControl3->Name = L"zedGraphControl3";
			   this->zedGraphControl3->ScrollGrace = 0;
			   this->zedGraphControl3->ScrollMaxX = 0;
			   this->zedGraphControl3->ScrollMaxY = 0;
			   this->zedGraphControl3->ScrollMaxY2 = 0;
			   this->zedGraphControl3->ScrollMinX = 0;
			   this->zedGraphControl3->ScrollMinY = 0;
			   this->zedGraphControl3->ScrollMinY2 = 0;
			   // 
			   // label2
			   // 
			   resources->ApplyResources(this->label2, L"label2");
			   this->label2->Name = L"label2";
			   // 
			   // label6
			   // 
			   resources->ApplyResources(this->label6, L"label6");
			   this->label6->Name = L"label6";
			   this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click_1);
			   // 
			   // label8
			   // 
			   resources->ApplyResources(this->label8, L"label8");
			   this->label8->Name = L"label8";
			   this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click_1);
			   // 
			   // label9
			   // 
			   resources->ApplyResources(this->label9, L"label9");
			   this->label9->Name = L"label9";
			   // 
			   // imageList1
			   // 
			   this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			   this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			   this->imageList1->Images->SetKeyName(0, L"Снимок экрана 2020-12-02 201248.png");
			   // 
			   // openFileDialog1
			   // 
			   this->openFileDialog1->FileName = L"openFileDialog1";
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::Wheat;
			   resources->ApplyResources(this->button1, L"button1");
			   this->button1->Name = L"button1";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			   // 
			   // label10
			   // 
			   resources->ApplyResources(this->label10, L"label10");
			   this->label10->Name = L"label10";
			   // 
			   // label11
			   // 
			   resources->ApplyResources(this->label11, L"label11");
			   this->label11->Name = L"label11";
			   // 
			   // label14
			   // 
			   resources->ApplyResources(this->label14, L"label14");
			   this->label14->Name = L"label14";
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::Color::MediumAquamarine;
			   resources->ApplyResources(this->button2, L"button2");
			   this->button2->Name = L"button2";
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_2);
			   // 
			   // label15
			   // 
			   resources->ApplyResources(this->label15, L"label15");
			   this->label15->Name = L"label15";
			   // 
			   // textBox5
			   // 
			   resources->ApplyResources(this->textBox5, L"textBox5");
			   this->textBox5->Name = L"textBox5";
			   // 
			   // MyForm
			   // 
			   resources->ApplyResources(this, L"$this");
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			   this->Controls->Add(this->textBox5);
			   this->Controls->Add(this->label15);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->label14);
			   this->Controls->Add(this->label11);
			   this->Controls->Add(this->label10);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->label9);
			   this->Controls->Add(this->label8);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->zedGraphControl3);
			   this->Controls->Add(this->zedGraphControl2);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->textBox4);
			   this->Controls->Add(this->label13);
			   this->Controls->Add(this->textBox3);
			   this->Controls->Add(this->label12);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->label7);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->textBox_kol_vo_shag);
			   this->Controls->Add(this->label_kol_vo_shagov);
			   this->Controls->Add(this->textBox_h);
			   this->Controls->Add(this->label_h);
			   this->Controls->Add(this->textBox_x0);
			   this->Controls->Add(this->label_x0);
			   this->Controls->Add(this->textBox_u0);
			   this->Controls->Add(this->label_u0);
			   this->Controls->Add(this->textBox_E);
			   this->Controls->Add(this->label_e);
			   this->Controls->Add(this->dataGridView1);
			   this->Controls->Add(this->butt_draw);
			   this->Controls->Add(this->zedGraphControl1);
			   this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->Name = L"MyForm";
			   this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private:
		double f1(double x, double u0, double x0) {
			return exp(3 * x) * u0 / exp(3 * x0);
		}

		private: void AddToDataGrid(vector<double> U, int i)
		{
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = U[5];//xi-[5]
			dataGridView1->Rows[i]->Cells[2]->Value = U[0];//vi
			dataGridView1->Rows[i]->Cells[3]->Value = U[1];//vi'
			dataGridView1->Rows[i]->Cells[4]->Value = U[2];//v2i
			dataGridView1->Rows[i]->Cells[5]->Value = U[3];//v2i'
			dataGridView1->Rows[i]->Cells[6]->Value = U[0] - U[1];//vi-v2i
			dataGridView1->Rows[i]->Cells[7]->Value = U[2] - U[3];//v2i-v2i'
			dataGridView1->Rows[i]->Cells[8]->Value = U[4];//OLP-[4]
			dataGridView1->Rows[i]->Cells[9]->Value =U[6];//H-[6]
			dataGridView1->Rows[i]->Cells[10]->Value = U[7];//c1-[7]
			dataGridView1->Rows[i]->Cells[11]->Value = U[8];//c2-[8]
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();

		GraphPane^ panel1 = zedGraphControl2->GraphPane;
		panel1->CurveList->Clear();

		GraphPane^ panelph = zedGraphControl3->GraphPane;
		panelph->CurveList->Clear();

		

		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f3_list = gcnew ZedGraph::PointPairList();
		int size = 2;

		vector<double> U(size), prev(size);
		vector<int> count(2);

		double eps = Convert::ToDouble(textBox_E->Text);
		U[0] = Convert::ToDouble(textBox_u0->Text);
		U[1] = Convert::ToDouble(textBox2->Text);
		double xmin = Convert::ToDouble(textBox_x0->Text);
		double h = Convert::ToDouble(textBox_h->Text);
		int n = Convert::ToInt32(textBox_kol_vo_shag->Text);
		double L= Convert::ToDouble(textBox1->Text);
		double EI= Convert::ToDouble(textBox3->Text);
		double P= Convert::ToDouble(textBox4->Text);
		double xmax = Convert::ToDouble(textBox1->Text);
		double xeps = Convert::ToDouble(textBox5->Text);
		
		vector<double> parametrs(3);
		parametrs[0] = L;
		parametrs[1] = EI;
		parametrs[2] = P;

		//Объявляем член класса
		func Solution(xmin, U, h, eps);

		//Добавляем параметры
		Solution.TakeParamerts(parametrs);
	

		double Maxh = h, Minh = h, MaxOLP = 0;
		int i = 0;
		double x = xmin;

		dataGridView1->Rows->Clear();

		//Инициализируем первую строку в таблице
		dataGridView1->Rows->Add();
		dataGridView1->Rows[i]->Cells[0]->Value = i;
		dataGridView1->Rows[i]->Cells[1]->Value = x;
		dataGridView1->Rows[i]->Cells[2]->Value = U[0];
		for (i = 1; (i < n) && (x < (xmax - xeps)); i++)
		{
			//Сохраняем предыдущее значение
			prev = U;
			//Запускаем метод с контролем ЛП
			U = Solution.ComplitWithControl();
			//Берём х
			x = U[size * 2 + 1];
			if (xmax < x)
				break;
			//Добавляем в список
			f1_list->Add(x, U[0]);
			f2_list->Add(x, U[1]);
			f3_list->Add(U[0], U[1]);
			//Выводим данные
			AddToDataGrid(U, i);
			//Смотрим, нашли ли мы что-то полезное
			if (U[size * 2 + 2] > Maxh)
				Maxh = U[size * 2 + 2];
			if (U[size * 2 + 2] < Minh)
				Minh = U[size * 2 + 2];
			if (U[size * 2] > MaxOLP)
				MaxOLP = U[size * 2];
		}

		//Контроль ЛП вступает в дело
		if (x > xmax)
		{
			//Присваиваем предыдущее значение
			U = prev;
			//Увеличиваем счётчик деления, чтобы в таблице всё было правильно
			U[size * 2 + 3]++;
			//Выводим
			AddToDataGrid(U, i);
			i++;
			//Уменьшаем шаг
			U[size * 2 + 2] /= 2;
			//Сохраняем все изменения в данных в классе
			Solution.ChangeAll(U);
			while (((x < (xmax - xeps)) || ((xmax - x) < 0)) && (i < n))
			{
				//Непосредственно контроль выхода на правую границе
				U = Solution.RightBorderControl(xmax);
				//Берём х
				x = U[size * 2 + 1];
				//Добавляем в список
				f1_list->Add(x, U[0]);
				f2_list->Add(x, U[1]);
				f2_list->Add(U[0], U[1]);
				//Выводим
				AddToDataGrid(U, i);
				i++;
				if (U[size * 2 + 2] < Minh)
					Minh = U[size * 2 + 2];
				if (U[size * 2] > MaxOLP)
					MaxOLP = U[size * 2];
			}
		}

	
		

		LineItem^ f1_Curve = panel->AddCurve("U(x)", f1_list, Color::DarkRed, SymbolType::None);
		LineItem^ f2_Curve = panel1->AddCurve("U'(x)", f2_list, Color::Purple, SymbolType::None);
		LineItem^ f3_Curve = panelph->AddCurve("Фазовая траектория", f3_list, Color::Blue, SymbolType::None);


		//label2->Text = "Xmax - X = " + Convert::ToString(xmax - x);
	//	label6->Text =  "max OLP = " + Convert::ToString(MaxOLP);
		//label8->Text = "max H = " + Convert::ToString(Maxh);
		//label9->Text =  "min H = " + Convert::ToString(Minh);
		
		
		
		
		panel->YAxisList->Clear();
		panel1->YAxisList->Clear();

		int axis1 = panel->AddYAxis("U(x)");
		int axis2 = panel1->AddYAxis("tg угла");

		f1_Curve->YAxisIndex = axis1;
		f2_Curve->YAxisIndex = axis2;

		panel->YAxisList[axis1]->Title->FontSpec->FontColor = Color::DarkRed;
		panel1->YAxisList[axis2]->Title->FontSpec->FontColor = Color::Purple;
		panelph->YAxisList[axis2]->Title->FontSpec->FontColor = Color::Blue;

		//panel->YAxis->Scale->Min = -5;
		//panel->YAxis->Scale->Max = 5;
		//panel->XAxis->Scale->Min = xmin - 0.1;
		//panel->XAxis->Scale->Max = xmax + 0.1;

	

		// Обновляем график, обновляем оси
		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
		zedGraphControl2->AxisChange();
		zedGraphControl2->Invalidate();
		zedGraphControl3->AxisChange();
		zedGraphControl3->Invalidate();

		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию

	}
	private: System::Void zedGraphControl1_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: void DrawGraph()
	{

		GraphPane^ panel = zedGraphControl1->GraphPane;
		GraphPane^ panel1 = zedGraphControl2->GraphPane;
		GraphPane^ panelph = zedGraphControl3->GraphPane;

		panel->XAxis->Title->Text = "Координата X";
		panel->YAxis->Title->Text = " U(x)";

		panel1->XAxis->Title->Text = "Координата X";
		panel1->YAxis->Title->Text = "tg угла наклона U'";

		panelph->XAxis->Title->Text = "U(х)";
		panelph->YAxis->Title->Text = "tg угла наклона U'";

		panel->Title->Text = "График изгибной линии";
		panel1->Title->Text = "Тангенс угла наклона в заданной точке";
		panelph->Title->Text = "Фазовый портрет";


		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
		zedGraphControl2->AxisChange();
		zedGraphControl2->Invalidate();
		zedGraphControl3->AxisChange();
		zedGraphControl3->Invalidate();

	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label_u0_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox_kol_vo_shag_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_h_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_x0_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void notifyIcon1_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
}
private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void pictureBox2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

	gform->Show();
}
private: System::Void button2_Click_2(System::Object^ sender, System::EventArgs^ e) {

	gform3->Show();
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void label8_Click_1(System::Object^ sender, System::EventArgs^ e) {
}

	  
};
}
