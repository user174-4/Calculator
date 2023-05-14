#pragma once
#include <cmath>
namespace Calculator {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
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
	private: System::Windows::Forms::Button^ close;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_AC;

	private: System::Windows::Forms::Button^ btn_result;

	private: System::Windows::Forms::Button^ btn_add;
	private: System::Windows::Forms::Button^ btn_min;
	private: System::Windows::Forms::Button^ btn_mult;
	private: System::Windows::Forms::Button^ btn_div;
	private: System::Windows::Forms::Button^ btn_znak;





	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ btn_point;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ btn_sqrt;

	private: System::Windows::Forms::Button^ btn_sq;

	private: System::Windows::Forms::Button^ btn_proc;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->close = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_AC = (gcnew System::Windows::Forms::Button());
			this->btn_result = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->btn_min = (gcnew System::Windows::Forms::Button());
			this->btn_mult = (gcnew System::Windows::Forms::Button());
			this->btn_div = (gcnew System::Windows::Forms::Button());
			this->btn_znak = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->btn_point = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->btn_sqrt = (gcnew System::Windows::Forms::Button());
			this->btn_sq = (gcnew System::Windows::Forms::Button());
			this->btn_proc = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// close
			// 
			this->close->BackColor = System::Drawing::Color::Red;
			this->close->Location = System::Drawing::Point(3, 3);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(27, 27);
			this->close->TabIndex = 0;
			this->close->Text = L"X";
			this->close->UseVisualStyleBackColor = false;
			this->close->Click += gcnew System::EventHandler(this, &MyForm::close_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->label1->Location = System::Drawing::Point(49, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(287, 62);
			this->label1->TabIndex = 1;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// btn_AC
			// 
			this->btn_AC->BackColor = System::Drawing::Color::Red;
			this->btn_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_AC->Location = System::Drawing::Point(12, 118);
			this->btn_AC->Name = L"btn_AC";
			this->btn_AC->Size = System::Drawing::Size(126, 60);
			this->btn_AC->TabIndex = 2;
			this->btn_AC->Text = L"AC";
			this->btn_AC->UseVisualStyleBackColor = false;
			this->btn_AC->Click += gcnew System::EventHandler(this, &MyForm::btn_AC_Click);
			// 
			// btn_result
			// 
			this->btn_result->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_result->Location = System::Drawing::Point(144, 118);
			this->btn_result->Name = L"btn_result";
			this->btn_result->Size = System::Drawing::Size(192, 60);
			this->btn_result->TabIndex = 5;
			this->btn_result->Text = L"=";
			this->btn_result->UseVisualStyleBackColor = false;
			this->btn_result->Click += gcnew System::EventHandler(this, &MyForm::btn_result_Click);
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_add->Location = System::Drawing::Point(210, 185);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(60, 60);
			this->btn_add->TabIndex = 9;
			this->btn_add->Text = L"+";
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &MyForm::btn_add_Click);
			// 
			// btn_min
			// 
			this->btn_min->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_min->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_min->Location = System::Drawing::Point(210, 248);
			this->btn_min->Name = L"btn_min";
			this->btn_min->Size = System::Drawing::Size(60, 60);
			this->btn_min->TabIndex = 13;
			this->btn_min->Text = L"-";
			this->btn_min->UseVisualStyleBackColor = false;
			this->btn_min->Click += gcnew System::EventHandler(this, &MyForm::btn_min_Click);
			// 
			// btn_mult
			// 
			this->btn_mult->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_mult->Location = System::Drawing::Point(210, 315);
			this->btn_mult->Name = L"btn_mult";
			this->btn_mult->Size = System::Drawing::Size(60, 60);
			this->btn_mult->TabIndex = 17;
			this->btn_mult->Text = L"*";
			this->btn_mult->UseVisualStyleBackColor = false;
			this->btn_mult->Click += gcnew System::EventHandler(this, &MyForm::btn_mult_Click);
			// 
			// btn_div
			// 
			this->btn_div->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_div->Location = System::Drawing::Point(276, 318);
			this->btn_div->Name = L"btn_div";
			this->btn_div->Size = System::Drawing::Size(60, 60);
			this->btn_div->TabIndex = 21;
			this->btn_div->Text = L"/";
			this->btn_div->UseVisualStyleBackColor = false;
			this->btn_div->Click += gcnew System::EventHandler(this, &MyForm::btn_div_Click);
			// 
			// btn_znak
			// 
			this->btn_znak->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn_znak->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_znak->Location = System::Drawing::Point(144, 381);
			this->btn_znak->Name = L"btn_znak";
			this->btn_znak->Size = System::Drawing::Size(60, 60);
			this->btn_znak->TabIndex = 20;
			this->btn_znak->Text = L"+/-";
			this->btn_znak->UseVisualStyleBackColor = false;
			this->btn_znak->Click += gcnew System::EventHandler(this, &MyForm::btn_znak_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(78, 381);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(60, 60);
			this->button19->TabIndex = 19;
			this->button19->Text = L"0";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// btn_point
			// 
			this->btn_point->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn_point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_point->Location = System::Drawing::Point(12, 381);
			this->btn_point->Name = L"btn_point";
			this->btn_point->Size = System::Drawing::Size(60, 60);
			this->btn_point->TabIndex = 18;
			this->btn_point->Text = L",";
			this->btn_point->UseVisualStyleBackColor = false;
			this->btn_point->Click += gcnew System::EventHandler(this, &MyForm::btn_point_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(12, 248);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 60);
			this->button2->TabIndex = 22;
			this->button2->Text = L"4";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(78, 249);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 60);
			this->button3->TabIndex = 23;
			this->button3->Text = L"5";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(144, 248);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 60);
			this->button6->TabIndex = 24;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(144, 184);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 60);
			this->button7->TabIndex = 27;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(78, 185);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 60);
			this->button8->TabIndex = 26;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(12, 184);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(60, 60);
			this->button10->TabIndex = 25;
			this->button10->Text = L"7";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(144, 314);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(60, 60);
			this->button11->TabIndex = 30;
			this->button11->Text = L"3";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(78, 315);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(60, 60);
			this->button12->TabIndex = 29;
			this->button12->Text = L"2";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(12, 314);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(60, 60);
			this->button14->TabIndex = 28;
			this->button14->Text = L"1";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// btn_sqrt
			// 
			this->btn_sqrt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_sqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_sqrt->Location = System::Drawing::Point(210, 384);
			this->btn_sqrt->Name = L"btn_sqrt";
			this->btn_sqrt->Size = System::Drawing::Size(126, 60);
			this->btn_sqrt->TabIndex = 33;
			this->btn_sqrt->Text = L"корень из x";
			this->btn_sqrt->UseVisualStyleBackColor = false;
			this->btn_sqrt->Click += gcnew System::EventHandler(this, &MyForm::btn_sqrt_Click);
			// 
			// btn_sq
			// 
			this->btn_sq->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_sq->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_sq->Location = System::Drawing::Point(276, 249);
			this->btn_sq->Name = L"btn_sq";
			this->btn_sq->Size = System::Drawing::Size(60, 60);
			this->btn_sq->TabIndex = 32;
			this->btn_sq->Text = L"^2";
			this->btn_sq->UseVisualStyleBackColor = false;
			this->btn_sq->Click += gcnew System::EventHandler(this, &MyForm::btn_sq_Click);
			// 
			// btn_proc
			// 
			this->btn_proc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_proc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_proc->Location = System::Drawing::Point(276, 186);
			this->btn_proc->Name = L"btn_proc";
			this->btn_proc->Size = System::Drawing::Size(60, 60);
			this->btn_proc->TabIndex = 31;
			this->btn_proc->Text = L"%";
			this->btn_proc->UseVisualStyleBackColor = false;
			this->btn_proc->Click += gcnew System::EventHandler(this, &MyForm::btn_proc_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(352, 453);
			this->Controls->Add(this->btn_sqrt);
			this->Controls->Add(this->btn_sq);
			this->Controls->Add(this->btn_proc);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btn_div);
			this->Controls->Add(this->btn_znak);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->btn_point);
			this->Controls->Add(this->btn_mult);
			this->Controls->Add(this->btn_min);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->btn_result);
			this->Controls->Add(this->btn_AC);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->close);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);

		}
#pragma endregion	

private: System::Void close_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_num_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ btn = safe_cast <Button^>(sender);
		if (this->label1->Text == "0") {
			this->label1->Text = btn->Text;
		}
		else {
			this->label1->Text = this->label1->Text + btn->Text;
		}
	}
	private: double num1;
	private: char op;
	private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {
		this->op = '+';
		this->num1 = System::Convert::ToDouble(this->label1->Text);
		this->label1->Text = "0";
	}
	private: System::Void btn_min_Click(System::Object^ sender, System::EventArgs^ e) {
		this->op = '-';
		this->num1 = System::Convert::ToDouble(this->label1->Text);
		this->label1->Text = "0";
	}
	private: System::Void btn_mult_Click(System::Object^ sender, System::EventArgs^ e) {
		this->op = '*';
		this->num1 = System::Convert::ToDouble(this->label1->Text);
		this->label1->Text = "0";
	}
	private: System::Void btn_div_Click(System::Object^ sender, System::EventArgs^ e) {
		this->op = '/';
		this->num1 = System::Convert::ToDouble(this->label1->Text);
		this->label1->Text = "0";
	}
	private: System::Void btn_result_Click(System::Object^ sender, System::EventArgs^ e) {
		double num2 = System::Convert::ToDouble(this->label1->Text);
		double res = 0;
		switch (this->op) {
		case ('+'): res = this->num1 + num2; break;
		case ('-'): res = this->num1 - num2; break;
		case ('*'): res = this->num1 * num2; break;
		case ('/'): if (num2 == 0) {
			MessageBox::Show("Деление на 0!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		} else {
			res = this->num1 / num2;
		} break;
		case ('%'):if (num2 == 0) {
			MessageBox::Show("Деление на 0!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}else {
			res = this->num1 / num2 * 100;
		} break;
		case ('^'): res = this->num1 * num1; break;
		case ('s'): res = sqrt(this->num1);
		}
		this->label1->Text = System::Convert::ToString(res);
	}
	private: System::Void btn_AC_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = "0";
		this->op = ' ';
	}
	private: System::Void btn_znak_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = System::Convert::ToString(System::Convert::ToDouble(this->label1->Text) * -1);
	}
	private: System::Void btn_point_Click(System::Object^ sender, System::EventArgs^ e) {
		if(!this->label1->Text->Contains(",")) this->label1->Text = this->label1->Text + ",";
	}
private: System::Void btn_proc_Click(System::Object^ sender, System::EventArgs^ e) {
	this->op = '%';
	this->num1 = System::Convert::ToDouble(this->label1->Text);
	this->label1->Text = "0";
}
private: System::Void btn_sq_Click(System::Object^ sender, System::EventArgs^ e) {
	this->op = '^';
	this->num1 = System::Convert::ToDouble(this->label1->Text);
	this->label1->Text = "0";
}
private: System::Void btn_sqrt_Click(System::Object^ sender, System::EventArgs^ e) {
	this->op = 's';
	this->num1 = System::Convert::ToDouble(this->label1->Text);
	this->label1->Text = "0";
}
};
}
