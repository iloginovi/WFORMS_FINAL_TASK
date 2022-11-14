#pragma once
#include "FRACTTREE.h"
namespace WFORMSFINALTASK {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
		Pen^ PEN1;
		Pen^ PEN2;
		Pen^ PEN3;
		Pen^ PEN4;
		Pen^ PEN5;
		Brush^ ZLVK1;
		Brush^ ZLVK2;
		Brush^ ZLVK3;
		Brush^ ZLVK4;
		Brush^ ZLVK5;
		int X0=100;
		int Y0=100;
		int scale=1;
		int Iter = 3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog2;
	private: System::Windows::Forms::ColorDialog^ colorDialog3;
	private: System::Windows::Forms::ColorDialog^ colorDialog4;
	private: System::Windows::Forms::ColorDialog^ colorDialog5;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->colorDialog2 = (gcnew System::Windows::Forms::ColorDialog());
			this->colorDialog3 = (gcnew System::Windows::Forms::ColorDialog());
			this->colorDialog4 = (gcnew System::Windows::Forms::ColorDialog());
			this->colorDialog5 = (gcnew System::Windows::Forms::ColorDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(325, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(818, 671);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(175, 723);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1233, 296);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(113, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"label2";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(113, 67);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 239);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"label3";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(29, 560);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(113, 239);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(113, 277);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 9;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(113, 317);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 10;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(113, 356);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 11;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(113, 399);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 12;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(113, 130);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(113, 185);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 156);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"label4";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1470, 1061);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void PaintTree(int** Tree_list, int layers_amount) {
		Graphics^ Графика = pictureBox2->CreateGraphics();
		//Графика->DrawRectangle
		int Yst = 20;
		int Xst = 650;
		int size = 10;
		int betw_l = 40;
		int in_l = 3;
		if (layers_amount >= 1) {
			//colors:
			
			if (Tree_list[0][2] == 1) {
				Графика->FillRectangle(ZLVK1, Xst, Yst, size, size);
			}
			if (Tree_list[0][2] == 2) {
				Графика->FillRectangle(ZLVK2, Xst, Yst, size, size);
			}
			if (Tree_list[0][2] == 3) {
				Графика->FillRectangle(ZLVK3, Xst, Yst, size, size);
			}
			if (Tree_list[0][2] == 4) {
				Графика->FillRectangle(ZLVK4, Xst, Yst, size, size);
			}
			if (Tree_list[0][2] == 5) {
				Графика->FillRectangle(ZLVK5, Xst, Yst, size, size);
			}
			if (Tree_list[0][2] > 5) {
				Графика->FillRectangle(ZLVK5, Xst, Yst, size, size);
			}
			//
			if (layers_amount >= 2) {
				//1
				if (Tree_list[1][2] == 1) {
					Графика->FillRectangle(ZLVK1, Xst-3*in_l-size-size/2, Yst+betw_l, size, size);
				}
				if (Tree_list[2][2] == 2) {
					Графика->FillRectangle(ZLVK2, Xst - 3 * in_l - size - size / 2, Yst + betw_l, size, size);
				}
				if (Tree_list[3][2] == 3) {
					Графика->FillRectangle(ZLVK3, Xst - 3 * in_l - size - size / 2, Yst + betw_l, size, size);
				}
				if (Tree_list[4][2] == 4) {
					Графика->FillRectangle(ZLVK4, Xst - 3*in_l - size - size / 2, Yst + betw_l, size, size);
				}
				if (Tree_list[5][2] == 5) {
					Графика->FillRectangle(ZLVK5, Xst - 3 * in_l - size - size / 2, Yst + betw_l, size, size);
				}
				if (Tree_list[0][2] > 5) {
					Графика->FillRectangle(ZLVK5, Xst - 3 * in_l - size - size / 2, Yst + betw_l, size, size);
				}
				Графика->DrawLine(System::Drawing::Pens::Black, Xst - 3 * in_l - size - size / 2 + size / 2, Yst + betw_l, Xst + size / 2, Yst+size);
				//2
				if (Tree_list[1][2] == 1) {
					Графика->FillRectangle(ZLVK1, Xst - in_l  - size / 2, Yst + betw_l, size, size);
				}
				if (Tree_list[2][2] == 2) {
					Графика->FillRectangle(ZLVK2, Xst -  in_l  - size / 2, Yst + betw_l, size, size);
				}
				if (Tree_list[3][2] == 3) {
					Графика->FillRectangle(ZLVK3, Xst -  in_l  - size / 2, Yst + betw_l, size, size);
				}
				if (Tree_list[4][2] == 4) {
					Графика->FillRectangle(ZLVK4, Xst -  in_l  - size / 2, Yst + betw_l, size, size);
				}
				if (Tree_list[5][2] == 5) {
					Графика->FillRectangle(ZLVK5, Xst -  in_l  - size / 2, Yst + betw_l, size, size);
				}
				if (Tree_list[0][2] > 5) {
					Графика->FillRectangle(ZLVK5, Xst - in_l - size / 2, Yst + betw_l, size, size);
				}
				Графика->DrawLine(System::Drawing::Pens::Black, Xst - in_l - size / 2 + size / 2, Yst + betw_l, Xst + size / 2, Yst + size);
				//3
				if (Tree_list[1][2] == 1) {
					Графика->FillRectangle(ZLVK1, Xst + in_l + size / 2, Yst + betw_l, size, size);
				}
				if (Tree_list[2][2] == 2) {
					Графика->FillRectangle(ZLVK2, Xst + in_l + size / 2, Yst + betw_l, size, size);
				}
				if (Tree_list[3][2] == 3) {
					Графика->FillRectangle(ZLVK3, Xst + in_l + size / 2, Yst + betw_l, size, size);
				}
				if (Tree_list[4][2] == 4) {
					Графика->FillRectangle(ZLVK4, Xst + in_l + size / 2, Yst + betw_l, size, size);
				}
				if (Tree_list[5][2] == 5) {
					Графика->FillRectangle(ZLVK5, Xst + in_l + size / 2, Yst + betw_l, size, size);
				}
				if (Tree_list[0][2] > 5) {
					Графика->FillRectangle(ZLVK5, Xst + in_l + size / 2, Yst + betw_l, size, size);
				}
				Графика->DrawLine(System::Drawing::Pens::Black, Xst + in_l + size / 2 + size / 2, Yst + betw_l, Xst + size / 2, Yst + size);
				//4
				if (Tree_list[1][2] == 1) {
					Графика->FillRectangle(ZLVK1, Xst + 3 * in_l + size + size / 2, Yst + betw_l, size, size);
				}
				if (Tree_list[2][2] == 2) {
					Графика->FillRectangle(ZLVK2, Xst + 3 * in_l + size + size / 2, Yst + betw_l, size, size);
				}
				if (Tree_list[3][2] == 3) {
					Графика->FillRectangle(ZLVK3, Xst + 3 * in_l + size + size / 2, Yst + betw_l, size, size);
				}
				if (Tree_list[4][2] == 4) {
					Графика->FillRectangle(ZLVK4, Xst + 3 * in_l + size + size / 2, Yst + betw_l, size, size);
				}
				if (Tree_list[5][2] == 5) {
					Графика->FillRectangle(ZLVK5, Xst + 3 * in_l + size + size / 2, Yst + betw_l, size, size);
				}
				if (Tree_list[0][2] > 5) {
					Графика->FillRectangle(ZLVK5, Xst + 3 * in_l + size + size / 2, Yst + betw_l, size, size);
				}
				Графика->DrawLine(System::Drawing::Pens::Black, Xst + 3 * in_l + size + size / 2 + size / 2, Yst + betw_l, Xst + size / 2, Yst + size);
				//
				if (layers_amount >= 3) {
					int prev_count = 4;
					int cur_count = 32;
					int skip = 5;
					int Sx = 0;int Sy = Yst+betw_l;
					int Px = Xst - 3 * in_l - size - size / 2;
					int Py = Yst + betw_l + size;
					int saveSX, saveSy;
					for (int i = 0; i < layers_amount - 2; i++) {
						Sx =Xst-((cur_count / 2) * size + (cur_count / 2 - 1) * in_l * 2 + in_l) ;
						Sy = Sy+ betw_l;
						saveSX = Sx; saveSy = Sy;
						for (int k = 0; k < prev_count; k++) {
							for (int j = 0; j < 8; j++) {
								if (Tree_list[skip + k * 8 + j][2] == 1) {
									Графика->FillRectangle(ZLVK1, Sx, Sy, size, size);
								}
								if (Tree_list[skip + k * 8 + j][2] == 2) {
									Графика->FillRectangle(ZLVK2, Sx, Sy, size, size);
								}
								if (Tree_list[skip + k * 8 + j][2] == 3) {
									Графика->FillRectangle(ZLVK3, Sx, Sy, size, size);
								}
								if (Tree_list[skip + k * 8 + j][2] == 4) {
									Графика->FillRectangle(ZLVK4, Sx, Sy, size, size);
								}
								if (Tree_list[skip + k * 8 + j][2] == 5) {
									Графика->FillRectangle(ZLVK5, Sx, Sy, size, size);
								}
								if (Tree_list[0][2] > 5) {
									Графика->FillRectangle(ZLVK5, Sx, Sy, size, size);
								}
								Графика->DrawLine(System::Drawing::Pens::Black, Sx+size/2, Sy, Px+size/2, Py);
								Sx = Sx + size + in_l * 2;
							}
							Px = Px + size + 2 * in_l;
						}
						Px = saveSX; Py = saveSy+size;
						prev_count = cur_count;
						skip = skip + cur_count;
						cur_count = cur_count * 8;
					}
				}
			}
		}
	}
	private: void PaintFRACT(int** coor_list,int layers_amount) {
		int coor_amount = 0;
		if (layers_amount == 1) {
			coor_amount = 4;
		}
		else {
			if (layers_amount == 2) {
				coor_amount = 4;
			}
			else {
				if (layers_amount >= 3) {
					coor_amount = 4;
					for (int k = 0; k < layers_amount - 2; k++) {
						coor_amount *= 8;
					}
				}
			}
			coor_amount = coor_amount * 8;
		}
		Graphics^ Графика = pictureBox1->CreateGraphics();
		for (int i = 1; i < coor_amount; i++) {
			cout << coor_list[i][2] << '\n';
			if(coor_list[i][2]==1){
				Графика->DrawLine(PEN1, coor_list[i - 1][0], coor_list[i - 1][1], coor_list[i][0], coor_list[i][1]);
			}
			if (coor_list[i][2] == 2) {
				Графика->DrawLine(PEN2, coor_list[i - 1][0], coor_list[i - 1][1], coor_list[i][0], coor_list[i][1]);
			}
			if (coor_list[i][2] == 3) {
				Графика->DrawLine(PEN3, coor_list[i - 1][0], coor_list[i - 1][1], coor_list[i][0], coor_list[i][1]);
			}
			if (coor_list[i][2] == 4) {
				Графика->DrawLine(PEN4, coor_list[i - 1][0], coor_list[i - 1][1], coor_list[i][0], coor_list[i][1]);
			}
			if (coor_list[i][2] == 5) {
				Графика->DrawLine(PEN5, coor_list[i - 1][0], coor_list[i - 1][1], coor_list[i][0], coor_list[i][1]);
			}
			if (coor_list[i][2] > 5) {
				Графика->DrawLine(PEN5, coor_list[i - 1][0], coor_list[i - 1][1], coor_list[i][0], coor_list[i][1]);
			}
			
			
		}
		if (coor_list[0][2] == 1) {
			Графика->DrawLine(PEN1, coor_list[coor_amount-1][0], coor_list[coor_amount-1][1], coor_list[0][0], coor_list[0][1]);
		}
		if (coor_list[0][2] == 2) {
			Графика->DrawLine(PEN2, coor_list[coor_amount-1][0], coor_list[coor_amount-1][1], coor_list[0][0], coor_list[0][1]);
		}
		if (coor_list[0][2] == 3) {
			Графика->DrawLine(PEN3, coor_list[coor_amount-1][0], coor_list[coor_amount-1][1], coor_list[0][0], coor_list[0][1]);
		}
		if (coor_list[0][2] == 4) {
			Графика->DrawLine(PEN4, coor_list[coor_amount-1][0], coor_list[coor_amount-1][1], coor_list[0][0], coor_list[0][1]);
		}
		if (coor_list[0][2] == 5) {
			Графика->DrawLine(PEN5, coor_list[coor_amount-1][0], coor_list[coor_amount-1][1], coor_list[0][0], coor_list[0][1]);
		}
		if (coor_list[0][2] > 5) {
			Графика->DrawLine(PEN5, coor_list[coor_amount - 1][0], coor_list[coor_amount - 1][1], coor_list[0][0], coor_list[0][1]);
		}
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		X0=Convert::ToInt32(textBox1->Text);
		Y0 = Convert::ToInt32(textBox2->Text);
		Iter = Convert::ToInt32(textBox3->Text);
		scale = Convert::ToInt32(textBox4->Text);
		int** FR_PRINT = COOR_COUNT(X0, Y0, Iter, 5, scale);
		PaintFRACT(FR_PRINT, Iter);
		int** TR_PRINT = TREE_DATA_FORM(X0, Y0, Iter, 5, scale);
		PaintTree(TR_PRINT, Iter);
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->Text = "Отрисовка Фрактала";
	label1->Text = "Координаты центра";
	label2->Text = "Количество Итераций";
	label3->Text = "Выбор цвета";
	label4->Text = "Масштаб X:";
	button1->Text = "Старт";
	button2->Text = "Цвет N 1";
	button3->Text = "Цвет N 2";
	button4->Text = "Цвет N 3";
	button5->Text = "Цвет N 4";
	button6->Text = "Цвет N 5";
	//PEN1 = gcnew Pen(Color::Red);
	//PEN2 = gcnew Pen(Color::Red);
	//PEN3 = gcnew Pen(Color::Green);
	//PEN4 = gcnew Pen(Color::Yellow);
	//PEN5 = gcnew Pen(Color::Black);

}	
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		PEN1 = gcnew Pen(colorDialog1->Color);
		ZLVK1 = gcnew SolidBrush(colorDialog1->Color);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (colorDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		PEN2 = gcnew Pen(colorDialog2->Color);
		ZLVK2 = gcnew SolidBrush(colorDialog2->Color);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (colorDialog3->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		PEN3 = gcnew Pen(colorDialog3->Color);
		ZLVK3 = gcnew SolidBrush(colorDialog3->Color);
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (colorDialog4->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		PEN4 = gcnew Pen(colorDialog4->Color);
		ZLVK4 = gcnew SolidBrush(colorDialog4->Color);
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (colorDialog5->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		PEN5 = gcnew Pen(colorDialog5->Color);
		ZLVK5 = gcnew SolidBrush(colorDialog5->Color);
	}
}
};
}
