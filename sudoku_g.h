#pragma once
/*! \file sudoku_g.h
	\brief Документируемый файл
*/
#include <string>
#include "sudoku_t.h"
#include "msclr\marshal_cppstd.h"

namespace sudoku {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для sudoku_g
	/// </summary>
	/*! 
		Класс используемый в графическом интерфейсе
	*/
	public ref class sudoku_g : public System::Windows::Forms::Form
	{
	public:
		sudoku_g(void)
		{
			
			InitializeComponent();

			//
			//TODO: добавьте код конструктора
			//
		}
		/*! \fn  System::Void create_pole()
		\brief Функция генерации поля для судоку
	*/

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~sudoku_g()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ gameItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ABCItem;
	private: System::Windows::Forms::ToolStripMenuItem^ numItem;
	private: System::Windows::Forms::ToolStripMenuItem^ letItem;
	private: System::Windows::Forms::ToolStripMenuItem^ difItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ dItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ dItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ dItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ dItem5;
	private: System::Windows::Forms::ToolStripMenuItem^ sizeItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ sItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ sItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ sItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ poleItem;
	private: System::Windows::Forms::ToolStripMenuItem^ countItem;
	private: System::Windows::Forms::ToolStripMenuItem^ statisticItem;
	private: System::Windows::Forms::ToolStripMenuItem^ statItem;
	private: System::Windows::Forms::ToolStripMenuItem^ NstatItem;
	protected:
	protected:
	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		/*! 
		Метод инициализирующий компоненты графического интерфейса
		*/
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->gameItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ABCItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->numItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->letItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->poleItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->countItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statisticItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->NstatItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->difItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sizeItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->gameItem, this->difItem,
					this->sizeItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(817, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// gameItem
			// 
			this->gameItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->nItem, this->pItem,
					this->ABCItem, this->poleItem, this->countItem, this->statisticItem
			});
			this->gameItem->Name = L"gameItem";
			this->gameItem->Size = System::Drawing::Size(57, 24);
			this->gameItem->Text = L"&Игра";
			// 
			// nItem
			// 
			this->nItem->Name = L"nItem";
			this->nItem->Size = System::Drawing::Size(409, 26);
			this->nItem->Text = L"Новая игра";
			this->nItem->Click += gcnew System::EventHandler(this, &sudoku_g::nItem_Click);
			// 
			// pItem
			// 
			this->pItem->Name = L"pItem";
			this->pItem->Size = System::Drawing::Size(409, 26);
			this->pItem->Text = L"&Подсказка";
			this->pItem->Click += gcnew System::EventHandler(this, &sudoku_g::pItem_Click);
			// 
			// ABCItem
			// 
			this->ABCItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->numItem, this->letItem });
			this->ABCItem->Name = L"ABCItem";
			this->ABCItem->Size = System::Drawing::Size(409, 26);
			this->ABCItem->Text = L"Выбор алфавита";
			// 
			// numItem
			// 
			this->numItem->Checked = true;
			this->numItem->CheckOnClick = true;
			this->numItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->numItem->Name = L"numItem";
			this->numItem->Size = System::Drawing::Size(134, 26);
			this->numItem->Text = L"Числа";
			this->numItem->Click += gcnew System::EventHandler(this, &sudoku_g::numItem_Click);
			// 
			// letItem
			// 
			this->letItem->CheckOnClick = true;
			this->letItem->Name = L"letItem";
			this->letItem->Size = System::Drawing::Size(134, 26);
			this->letItem->Text = L"Буквы";
			this->letItem->Click += gcnew System::EventHandler(this, &sudoku_g::letItem_Click);
			// 
			// poleItem
			// 
			this->poleItem->Name = L"poleItem";
			this->poleItem->Size = System::Drawing::Size(409, 26);
			this->poleItem->Text = L"Создать пустое поле";
			this->poleItem->Click += gcnew System::EventHandler(this, &sudoku_g::poleItem_Click);
			// 
			// countItem
			// 
			this->countItem->Name = L"countItem";
			this->countItem->Size = System::Drawing::Size(409, 26);
			this->countItem->Text = L"Подсчитать количество возможных решений";
			this->countItem->Click += gcnew System::EventHandler(this, &sudoku_g::countItem_Click);
			// 
			// statisticItem
			// 
			this->statisticItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->statItem,
					this->NstatItem
			});
			this->statisticItem->Name = L"statisticItem";
			this->statisticItem->Size = System::Drawing::Size(409, 26);
			this->statisticItem->Text = L"Статистика игр";
			// 
			// statItem
			// 
			this->statItem->Name = L"statItem";
			this->statItem->Size = System::Drawing::Size(260, 26);
			this->statItem->Text = L"Показать статистику игр";
			this->statItem->Click += gcnew System::EventHandler(this, &sudoku_g::statItem_Click);
			// 
			// NstatItem
			// 
			this->NstatItem->Name = L"NstatItem";
			this->NstatItem->Size = System::Drawing::Size(260, 26);
			this->NstatItem->Text = L"Обнулить статистику";
			this->NstatItem->Click += gcnew System::EventHandler(this, &sudoku_g::NstatItem_Click);
			// 
			// difItem
			// 
			this->difItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->dItem1, this->dItem2,
					this->dItem3, this->dItem4, this->dItem5
			});
			this->difItem->Name = L"difItem";
			this->difItem->Size = System::Drawing::Size(99, 24);
			this->difItem->Text = L"Сложность";
			// 
			// dItem1
			// 
			this->dItem1->CheckOnClick = true;
			this->dItem1->Name = L"dItem1";
			this->dItem1->Size = System::Drawing::Size(200, 26);
			this->dItem1->Text = L"Очень легкая";
			this->dItem1->Click += gcnew System::EventHandler(this, &sudoku_g::dItem1_Click);
			// 
			// dItem2
			// 
			this->dItem2->CheckOnClick = true;
			this->dItem2->Name = L"dItem2";
			this->dItem2->Size = System::Drawing::Size(200, 26);
			this->dItem2->Text = L"Легкая";
			this->dItem2->Click += gcnew System::EventHandler(this, &sudoku_g::dItem2_Click);
			// 
			// dItem3
			// 
			this->dItem3->Checked = true;
			this->dItem3->CheckOnClick = true;
			this->dItem3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->dItem3->Name = L"dItem3";
			this->dItem3->Size = System::Drawing::Size(200, 26);
			this->dItem3->Text = L"Средняя";
			this->dItem3->Click += gcnew System::EventHandler(this, &sudoku_g::dItem3_Click);
			// 
			// dItem4
			// 
			this->dItem4->CheckOnClick = true;
			this->dItem4->Name = L"dItem4";
			this->dItem4->Size = System::Drawing::Size(200, 26);
			this->dItem4->Text = L"Сложная";
			this->dItem4->Click += gcnew System::EventHandler(this, &sudoku_g::dItem4_Click);
			// 
			// dItem5
			// 
			this->dItem5->CheckOnClick = true;
			this->dItem5->Name = L"dItem5";
			this->dItem5->Size = System::Drawing::Size(200, 26);
			this->dItem5->Text = L"Очень сложная";
			this->dItem5->Click += gcnew System::EventHandler(this, &sudoku_g::dItem5_Click);
			// 
			// sizeItem
			// 
			this->sizeItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->sItem1, this->sItem2,
					this->sItem3, this->sItem4
			});
			this->sizeItem->Name = L"sizeItem";
			this->sizeItem->Size = System::Drawing::Size(74, 24);
			this->sizeItem->Text = L"Размер";
			// 
			// sItem1
			// 
			this->sItem1->CheckOnClick = true;
			this->sItem1->Name = L"sItem1";
			this->sItem1->Size = System::Drawing::Size(115, 26);
			this->sItem1->Text = L"2х2";
			this->sItem1->Click += gcnew System::EventHandler(this, &sudoku_g::sItem1_Click);
			// 
			// sItem2
			// 
			this->sItem2->Checked = true;
			this->sItem2->CheckOnClick = true;
			this->sItem2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->sItem2->Name = L"sItem2";
			this->sItem2->Size = System::Drawing::Size(115, 26);
			this->sItem2->Text = L"3х3";
			this->sItem2->Click += gcnew System::EventHandler(this, &sudoku_g::sItem2_Click);
			// 
			// sItem3
			// 
			this->sItem3->CheckOnClick = true;
			this->sItem3->Name = L"sItem3";
			this->sItem3->Size = System::Drawing::Size(115, 26);
			this->sItem3->Text = L"4х4";
			this->sItem3->Click += gcnew System::EventHandler(this, &sudoku_g::sItem3_Click);
			// 
			// sItem4
			// 
			this->sItem4->CheckOnClick = true;
			this->sItem4->Name = L"sItem4";
			this->sItem4->Size = System::Drawing::Size(115, 26);
			this->sItem4->Text = L"5х5";
			this->sItem4->Click += gcnew System::EventHandler(this, &sudoku_g::sItem4_Click);
			// 
			// sudoku_g
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(817, 737);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"sudoku_g";
			this->Text = L"Судоку";
			this->Load += gcnew System::EventHandler(this, &sudoku_g::sudoku_g_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		cli::array<TextBox^>^ TB;
		Color^ col = gcnew Color();
		int* s = new int, * d = new int, * t = new int;
		int** arr1 = new int* [25];
		int** arr2 = new int* [25];
	private: System::Void sudoku_g_Load(System::Object^ sender, System::EventArgs^ e) {
		*t = 1;
		*d = 3;
		*s = 3;
		TB = gcnew cli::array<TextBox^>(625);
		int i;
		for (i = 0; i < 25; i++)
		{
			arr1[i] = new int[25];
			arr2[i] = new int[25];
		}
		int size = 40;
		create_pole();
		pole();
	}
	/*! \fn System::Void line(int x1, int x2, int y1, int y2)
	    \brief Функция рисующая линии для разделения поля
	    \param[in] x1 Координаты начала линии по горизонтали
	    \param[in] x2 Координаты конца линии по горизонтали
	    \param[in] y1 Координаты начала линии по вертикали
	    \param[in] y2 Координаты конца линии по вертикали
	*/
	private: System::Void line(int x1, int x2, int y1, int y2) {
		Graphics^ im = this->CreateGraphics();
		Pen^ pen = gcnew Pen(col->Black);
		im->DrawLine(pen, x1, y1, x2, y2);
	}
    /*! \fn  System::Void create_pole()
        \brief Функция генерации поля для судоку
    */
	private: System::Void create_pole() {
		Graphics^ im = this->CreateGraphics();
		im->Clear(col->White);
		int o = *s * *s;
		int size;
		switch (*s)
		{
		case(2):
			size = 70;
			break;
		case(3):
			size = 40;
			break;
		case(4):
			size = 30;
			break;
		case(5):
			size = 20;
			break;
		default:
			size = 20;
			break;
		}
		for (int i = 0; i < 625; i++)
		{
			this->Controls->Remove(TB[i]);
		}
		this->Size = System::Drawing::Size(24 + (size + 3) * o, 64 + (size + 3) * o);
		System::Drawing::Font^ fs = gcnew System::Drawing::Font("Times New Roman", (size / 2));
		for (int i = 0; i < o; i++)
		{
			for (int j = 0; j < o; j++)
			{
				TB[j + o * i] = gcnew TextBox;
				TB[j + o * i]->Multiline = true;
				TB[j + o * i]->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
				TB[j + o * i]->Font = fs;
				TB[j + o * i]->BackColor = col->White;
				TB[j + o * i]->Size = System::Drawing::Size(size, size);
				TB[j + o * i]->Location = System::Drawing::Point(6 + (size + 3) * i, 32 + (size + 3) * j);
				TB[j + o * i]->Name = L"TB" + Convert::ToString(j + o * i);
				TB[j + o * i]->TabIndex = 2;

				this->Controls->Add(TB[j + o * i]);
			}
		}
		for (int i = 1; i < *s; i++)
		{
			line(4 + (size + 3) * *s * i, 4 + (size + 3) * *s * i, 29, 32 + (size + 3) * o);
		}
		for (int i = 1; i < *s; i++)
		{
			line(3, 6 + (size + 3) * o, 30 + (size + 3) * *s * i, 30 + (size + 3) * *s * i);
		}
	}
	/*! \fn System::Void pole()
	    \brief Функция генерации судоку
	*/
	private: System::Void pole() {
		int o = *s * *s;
		int i, j;
		for (i = 0; i < o; i++)
		{
			for (j = 0; j < o; j++)
			{
				TB[j + o * i]->TextChanged -= gcnew System::EventHandler(this, &sudoku_g::TextChanged);
				arr1[i][j] = (j + *s * i + (i / *s)) % (o)+1;
				TB[j + o * i]->Text = "";
			}
		}
		mesh(arr1, arr2, *s);
		for (j = 0; j < o; j++)
		{
			for (i = 0; i < o; i++)
			{
				TB[i + o * j]->ReadOnly = true;
			}
		}
		int p;
		switch (*d)
		{
		case(1):
			switch (*s)
			{
			case(2):
				p = 4;
				break;
			case(3):
				p = 30;
				break;
			case(4):
				p = 55;
				break;
			case(5):
				p = 100;
				break;
			}
			break;
		case(2):
			switch (*s)
			{
			case(2):
				p = 6;
				break;
			case(3):
				p = 37;
				break;
			case(4):
				p = 70;
				break;
			case(5):
				p = 130;
				break;
			}
			break;
		case(3):
			switch (*s)
			{
			case(2):
				p = 8;
				break;
			case(3):
				p = 40;
				break;
			case(4):
				p = 90;
				break;
			case(5):
				p = 160;
				break;
			}
			break;
		case(4):
			switch (*s)
			{
			case(2):
				p = 10;
				break;
			case(3):
				p = 48;
				break;
			case(4):
				p = 110;
				break;
			case(5):
				p = 190;
				break;
			}
			break;
		case(5):
			switch (*s)
			{
			case(2):
				p = 11;
				break;
			case(3):
				p = 55;
				break;
			case(4):
				p = 125;
				break;
			case(5):
				p = 225;
				break;
			}
			break;
		default:
			p = (o * o) / 4;
			break;
		}
		int a, b;
		for (int h = 0; h < p; h++)
		{
			do {
				a = ran(o);
				b = ran(o);
			} while (arr1[a][b] == 0);
			arr1[a][b] = 0;
			TB[a + o * b]->ReadOnly = false;
			TB[a + o * b]->ForeColor = col->Black;
			TB[a + o * b]->TextChanged += gcnew System::EventHandler(this, &sudoku_g::TextChanged);
		}
		for (i = 0; i < o; i++)
		{
			for (j = 0; j < o; j++)
			{
				if (arr1[i][j] != 0)
				{
					if (*t == 1)
					{
						TB[i + o * j]->ForeColor = col->LightSlateGray;
						TB[i + o * j]->Text = Convert::ToString(arr1[i][j]);
					}
					else
					{
						using namespace msclr::interop;
						std::string v[25] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y" };
						String^ res = marshal_as<String^>(v[arr1[i][j] - 1]);
						TB[i + o * j]->ForeColor = col->LightSlateGray;
						TB[i + o * j]->Text = res;
					}
				}
			}
		}
	}
	private: System::Void numItem_Click(System::Object^ sender, System::EventArgs^ e) {
		letItem->Checked = false;
		*t = 1;
		numItem->Checked = true;
		pole();
	}
	private: System::Void letItem_Click(System::Object^ sender, System::EventArgs^ e) {
		numItem->Checked = false;
		*t = 2;
		letItem->Checked = true;
		pole();
	}
	private: System::Void dItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		dItem2->Checked = false;
		dItem3->Checked = false;
		dItem4->Checked = false;
		dItem5->Checked = false;
		*d = 1;
		dItem1->Checked = true;
		pole();
	}
	private: System::Void dItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		dItem1->Checked = false;
		dItem3->Checked = false;
		dItem4->Checked = false;
		dItem5->Checked = false;
		*d = 2;
		dItem2->Checked = true;
		pole();
	}
	private: System::Void dItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		dItem1->Checked = false;
		dItem2->Checked = false;
		dItem4->Checked = false;
		dItem5->Checked = false;
		*d = 3;
		dItem3->Checked = true;
		pole();
	}
	private: System::Void dItem4_Click(System::Object^ sender, System::EventArgs^ e) {
		dItem1->Checked = false;
		dItem2->Checked = false;
		dItem3->Checked = false;
		dItem5->Checked = false;
		*d = 4;
		dItem4->Checked = true;
		pole();
	}
	private: System::Void dItem5_Click(System::Object^ sender, System::EventArgs^ e) {
		dItem1->Checked = false;
		dItem2->Checked = false;
		dItem3->Checked = false;
		dItem4->Checked = false;
		*d = 5;
		dItem5->Checked = true;
		pole();
	}
	private: System::Void sItem1_Click(System::Object^ sender, System::EventArgs^ e) {

		sItem2->Checked = false;
		sItem3->Checked = false;
		sItem4->Checked = false;
		*s = 2;
		sItem1->Checked = true;
		create_pole();
		pole();
	}
	private: System::Void sItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		sItem1->Checked = false;
		sItem3->Checked = false;
		sItem4->Checked = false;
		*s = 3;
		sItem2->Checked = true;
		create_pole();
		pole();
	}
	private: System::Void sItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		sItem1->Checked = false;
		sItem2->Checked = false;
		sItem4->Checked = false;
		*s = 4;
		sItem3->Checked = true;
		create_pole();
		pole();
	}
	private: System::Void sItem4_Click(System::Object^ sender, System::EventArgs^ e) {
		sItem1->Checked = false;
		sItem2->Checked = false;
		sItem3->Checked = false;
		*s = 5;
		sItem4->Checked = true;
		create_pole();
		pole();
	}
	private: System::Void nItem_Click(System::Object^ sender, System::EventArgs^ e) {
		pole();
	}
	/*! \fn System::Void proverka()
	    \brief Функция проверки поля на правильное заполнение
	*/
	private: System::Void proverka() {
		int f = 0, k = 0;
		for (int i = 0; i < *s * *s; i++)
		{
			for (int j = 0; j < *s * *s; j++)
			{
				if (TB[j + *s * *s * i]->Text == "")
				{
					arr2[i][j] = 0;
					k = 1;
				}
				else
				{
					if (*t == 1)
					{
						for (int h = 0; h < *s * *s; h++)
						{
							using namespace msclr::interop;
							std::string v[25] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25" };
							String^ res = marshal_as<String^>(v[h]);
							if (TB[j + *s * *s * i]->Text == res)
							{
								arr2[i][j] = h + 1;
								f = 0;
								break;
							}
							else
							{
								f = 1;
							}
						}
						if (f == 1)
						{
							System::Windows::Forms::MessageBox::Show(L"Введен неверный символ", L"Ошибка", System::Windows::Forms::MessageBoxButtons::OK);
							return;
						}
					}
					else
					{
						for (int h = 0; h < *s * *s; h++)
						{
							using namespace msclr::interop;
							std::string v[25] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y" };
							String^ res = marshal_as<String^>(v[h]);
							if (TB[j + *s * *s * i]->Text == res)
							{
								arr2[i][j] = h + 1;
								f = 0;
								break;
							}
							else
							{
								f = 1;
							}
						}
						if (f == 1)
						{
							System::Windows::Forms::MessageBox::Show(L"Введен неверный символ", L"Ошибка", System::Windows::Forms::MessageBoxButtons::OK);
							return;
						}
					}
				}
			}
		}
		if (prov(arr2, *s) == 1)
		{
			System::Windows::Forms::MessageBox::Show(L"Неверное заполнение", L"Ошибка", System::Windows::Forms::MessageBoxButtons::OK);
		}
		else
		{
			if (k == 0)
			{
				int a[20];
				for (int i = 0; i < 20; i++)
				{
					a[i] = 0;
				}
				read(a);
				a[(*s - 2) * 5 + *d - 1]++;
				write(a);
				System::Windows::Forms::MessageBox::Show(L"Решение верно", L"Победа", System::Windows::Forms::MessageBoxButtons::OK);
				for (int j = 0; j < *s * *s; j++)
				{
					for (int i = 0; i < *s * *s; i++)
					{
						TB[i + *s * *s * j]->ReadOnly = true;
					}
				}
			}
		}

	}
	private: System::Void poleItem_Click(System::Object^ sender, System::EventArgs^ e) {
		int o = *s * *s;
		for (int i = 0; i < o; i++)
		{
			for (int j = 0; j < o; j++)
			{
				TB[j + o * i]->TextChanged -= gcnew System::EventHandler(this, &sudoku_g::TextChanged);
				TB[j + o * i]->Text = ""; 
				TB[j + o * i]->ForeColor = col->Black;
				TB[j + o * i]->ReadOnly = false;
				TB[j + o * i]->TextChanged += gcnew System::EventHandler(this, &sudoku_g::TextChanged);
			}
		}
	}
	/*! \fn int read_p()
	    \brief Функция считывающая массив судоку с поля
		\return Возвращает -1, если введен неверный символ, на поле есть ошибка или поле полностью заполнено, иначе возвращает количество заполненых элементов
	*/
	private: int read_p() {
		int f = 0, m = 0;
		int count = 0;
		for (int i = 0; i < *s * *s; i++)
		{
			for (int j = 0; j < *s * *s; j++)
			{
				if (TB[j + *s * *s * i]->Text == "")
				{
					arr1[i][j] = 0;
					m = 1;
				}
				else
				{
					if (*t == 1)
					{
						for (int h = 0; h < *s * *s; h++)
						{
							using namespace msclr::interop;
							std::string v[25] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25" };
							String^ res = marshal_as<String^>(v[h]);
							if (TB[j + *s * *s * i]->Text == res)
							{
								arr1[i][j] = h + 1;
								f = 0;
								count++;
								break;
							}
							else
							{
								f = 1;
							}
						}
						if (f == 1)
						{
							System::Windows::Forms::MessageBox::Show(L"Введен неверный символ", L"Ошибка", System::Windows::Forms::MessageBoxButtons::OK);
							return -1;
						}
					}
					else
					{
						for (int h = 0; h < *s * *s; h++)
						{
							using namespace msclr::interop;
							std::string v[25] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y" };
							String^ res = marshal_as<String^>(v[h]);
							if (TB[j + *s * *s * i]->Text == res)
							{
								arr1[i][j] = h + 1;
								f = 0;
								count++;
								break;
							}
							else
							{
								f = 1;
							}
						}
						if (f == 1)
						{
							System::Windows::Forms::MessageBox::Show(L"Введен неверный символ", L"Ошибка", System::Windows::Forms::MessageBoxButtons::OK);
							return -1;
						}
					}
				}
			}
		}
		if (prov(arr2, *s))
		{
			System::Windows::Forms::MessageBox::Show(L"Поле заполнено неверно", L"Ошибка", System::Windows::Forms::MessageBoxButtons::OK);
			return -1;
		}
		if (m == 0)
		{
			System::Windows::Forms::MessageBox::Show(L"Поле заполнено", L"Ошибка", System::Windows::Forms::MessageBoxButtons::OK);
			return -1;
		}
		return count;
	}
	private: System::Void pItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (read_p() == -1) return;
		int m = 0;
		for (int i = 0; i < *s * *s; i++)
		{
			for (int j = 0; j < *s * *s; j++)
			{
				if (arr1[i][j] != 0 && arr1[i][j] != arr2[i][j] || arr2[i][j] == 0)
				{
					m = 1;
					break;
				}
			}
		}
		if (m == 0)
		{
			if (prov(arr2, *s))
			{
				m = 1;
			}
		}
		else if (m == 1)
		{
			for (int i = 0; i < *s * *s; i++)
			{
				for (int j = 0; j < *s * *s; j++)
				{
					arr2[i][j] = arr1[i][j];
				}
			}
			if (!fill_sud(arr2, 0, 0, *s))
			{
				System::Windows::Forms::MessageBox::Show(L"Нет возможных решений", L"Ошибка", System::Windows::Forms::MessageBoxButtons::OK);
				return;
			}
		}
		int a, b;
		do {
			a = ran(*s * *s);
			b = ran(*s * *s);
		} while (arr1[a][b] != 0);
		if (*t == 1)
		{
			TB[b + *s * *s * a]->Text = Convert::ToString(arr2[a][b]);
		}
		else
		{
			using namespace msclr::interop;
			std::string v[25] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y" };
			String^ res = marshal_as<String^>(v[arr2[a][b] - 1]);
			TB[b + *s * *s * a]->Text = res;
		}
	}
	private: System::Void countItem_Click(System::Object^ sender, System::EventArgs^ e) {
		int c = read_p();
		if (c == -1) return;
		int p;
		switch (*s)
		{
		case(2):
			p = 0;
			break;
		case(3):
			p = 20;
			break;
		case(4):
			p = 130;
			break;
		case(5):
			p = 400;
			break;
		}
		if (c < p)
		{
			System::Windows::Forms::MessageBox::Show(L"Должно быть хотябы " + Convert::ToString(p) + " заполненых клеток!", L"ошибка", System::Windows::Forms::MessageBoxButtons::OK);
			return;
		}
		int* count = new int;
		*count = 0;
		resh(arr1, 0, 0, *s, count, 1);
		System::Windows::Forms::MessageBox::Show(L"Найдено " + Convert::ToString(*count) + " решений", L"Задача выполнена", System::Windows::Forms::MessageBoxButtons::OK);
	}
	private: System::Void statItem_Click(System::Object^ sender, System::EventArgs^ e) {
		int a[20];
		for (int i = 0; i < 20; i++)
		{
			a[i] = 0;
		}
		read(a);
		System::Windows::Forms::MessageBox::Show(L"Было завершено " + Convert::ToString(a[0]) + " игр сложности 1 на поле 2х2.\n"
												 L"Было завершено " + Convert::ToString(a[1]) + " игр сложности 2 на поле 2х2.\n"
												 L"Было завершено " + Convert::ToString(a[2]) + " игр сложности 3 на поле 2х2.\n"
												 L"Было завершено " + Convert::ToString(a[3]) + " игр сложности 4 на поле 2х2.\n"
												 L"Было завершено " + Convert::ToString(a[4]) + " игр сложности 5 на поле 2х2.\n"
												 L"Было завершено " + Convert::ToString(a[5]) + " игр сложности 1 на поле 3х3.\n"
												 L"Было завершено " + Convert::ToString(a[6]) + " игр сложности 2 на поле 3х3.\n"
												 L"Было завершено " + Convert::ToString(a[7]) + " игр сложности 3 на поле 3х3.\n"
												 L"Было завершено " + Convert::ToString(a[8]) + " игр сложности 4 на поле 3х3.\n"
												 L"Было завершено " + Convert::ToString(a[9]) + " игр сложности 5 на поле 3х3.\n"
												 L"Было завершено " + Convert::ToString(a[10]) + " игр сложности 1 на поле 4х4.\n"
												 L"Было завершено " + Convert::ToString(a[11]) + " игр сложности 2 на поле 4х4.\n"
												 L"Было завершено " + Convert::ToString(a[12]) + " игр сложности 3 на поле 4х4.\n"
												 L"Было завершено " + Convert::ToString(a[13]) + " игр сложности 4 на поле 4х4.\n"
												 L"Было завершено " + Convert::ToString(a[14]) + " игр сложности 5 на поле 4х4.\n"
												 L"Было завершено " + Convert::ToString(a[15]) + " игр сложности 1 на поле 5x5.\n"
												 L"Было завершено " + Convert::ToString(a[16]) + " игр сложности 2 на поле 5x5.\n"
												 L"Было завершено " + Convert::ToString(a[17]) + " игр сложности 3 на поле 5x5.\n"
												 L"Было завершено " + Convert::ToString(a[18]) + " игр сложности 4 на поле 5x5.\n"
												 L"Было завершено " + Convert::ToString(a[19]) + " игр сложности 5 на поле 5x5.\n"
											   , L"Статистика", System::Windows::Forms::MessageBoxButtons::OK);
	}
	private: System::Void NstatItem_Click(System::Object^ sender, System::EventArgs^ e) {
		int a[20];
		for (int i = 0; i < 20; i++)
		{
			a[i] = 0;
		}
		write(a);
	}
	private: System::Void TextChanged(System::Object^ sender, System::EventArgs^ e) {
		proverka();
	}
};
}
