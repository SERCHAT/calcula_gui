#pragma once
#include "Calculator.h"

namespace calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Calcula
	/// </summary>
	public ref class Calcula : public System::Windows::Forms::Form
	{
		int num1 = 0;
		int num2 = 0;
		bool isAdd = false;
	public:
		Calcula(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Calcula()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button1->Location = System::Drawing::Point(27, 117);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"=";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Calcula::button1_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Dock = System::Windows::Forms::DockStyle::Top;
			this->numericUpDown1->Location = System::Drawing::Point(0, 0);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(428, 20);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(27, 75);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Calcula::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(108, 75);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Calcula::button3_Click);
			// 
			// Calcula
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(428, 320);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button1);
			this->Name = L"Calcula";
			this->Text = L"Calcula";
			this->Load += gcnew System::EventHandler(this, &Calcula::Calcula_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
		
#pragma endregion
	private: System::Void Calcula_Load(System::Object^ sender, System::EventArgs^ e) {

		numericUpDown1->Controls[0]->Visible = false;
		

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		num1 = Convert::ToInt32(numericUpDown1->Text->ToString());
		isAdd = true;
		numericUpDown1->Text = "";
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		num1 = Convert::ToInt32(numericUpDown1->Text->ToString());
		isAdd = false;
		numericUpDown1->Text = "";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Calculator calc = Calculator();
	num2 = Convert::ToInt32(numericUpDown1->Text->ToString());
	if (isAdd) {

		numericUpDown1->Text = calc.add(num1, num2).ToString();
	}
	else {
		calc.sub(num1, num2);
		numericUpDown1->Text = calc.sub(num1, num2).ToString();
	}
}
};
}
