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
	private: System::Windows::Forms::Button^ btn_multiply;
	private: System::Windows::Forms::Button^ btn_division;


	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ btn_point;
	private: System::Windows::Forms::Button^ button1;

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
	private: System::Windows::Forms::Button^ btn_equals;
	protected:

	protected:
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ btn_add;

	private: System::Windows::Forms::Button^ btn_mines;


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
			this->btn_equals = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->btn_mines = (gcnew System::Windows::Forms::Button());
			this->btn_multiply = (gcnew System::Windows::Forms::Button());
			this->btn_division = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->btn_point = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_equals
			// 
			this->btn_equals->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btn_equals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->btn_equals->Location = System::Drawing::Point(162, 205);
			this->btn_equals->Name = L"btn_equals";
			this->btn_equals->Size = System::Drawing::Size(46, 94);
			this->btn_equals->TabIndex = 0;
			this->btn_equals->Text = L"=";
			this->btn_equals->UseVisualStyleBackColor = true;
			this->btn_equals->Click += gcnew System::EventHandler(this, &Calcula::button1_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Dock = System::Windows::Forms::DockStyle::Top;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->numericUpDown1->Location = System::Drawing::Point(0, 0);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(215, 48);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btn_add
			// 
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->btn_add->Location = System::Drawing::Point(162, 105);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(46, 94);
			this->btn_add->TabIndex = 2;
			this->btn_add->Text = L"+";
			this->btn_add->UseVisualStyleBackColor = true;
			this->btn_add->Click += gcnew System::EventHandler(this, &Calcula::button2_Click);
			// 
			// btn_mines
			// 
			this->btn_mines->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->btn_mines->Location = System::Drawing::Point(162, 55);
			this->btn_mines->Name = L"btn_mines";
			this->btn_mines->Size = System::Drawing::Size(46, 44);
			this->btn_mines->TabIndex = 3;
			this->btn_mines->Text = L"-";
			this->btn_mines->UseVisualStyleBackColor = true;
			this->btn_mines->Click += gcnew System::EventHandler(this, &Calcula::button3_Click);
			// 
			// btn_multiply
			// 
			this->btn_multiply->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btn_multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->btn_multiply->Location = System::Drawing::Point(110, 55);
			this->btn_multiply->Name = L"btn_multiply";
			this->btn_multiply->Size = System::Drawing::Size(46, 44);
			this->btn_multiply->TabIndex = 4;
			this->btn_multiply->Text = L"*";
			this->btn_multiply->UseVisualStyleBackColor = true;
			// 
			// btn_division
			// 
			this->btn_division->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btn_division->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->btn_division->Location = System::Drawing::Point(58, 55);
			this->btn_division->Name = L"btn_division";
			this->btn_division->Size = System::Drawing::Size(46, 44);
			this->btn_division->TabIndex = 4;
			this->btn_division->Text = L"/";
			this->btn_division->UseVisualStyleBackColor = true;
			this->btn_division->Click += gcnew System::EventHandler(this, &Calcula::btn_division_Click);
			// 
			// button6
			// 
			this->button6->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button6->Location = System::Drawing::Point(6, 105);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(46, 44);
			this->button6->TabIndex = 5;
			this->button6->Text = L"7";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button7->Location = System::Drawing::Point(58, 105);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(46, 44);
			this->button7->TabIndex = 6;
			this->button7->Text = L"8";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button8->Location = System::Drawing::Point(110, 105);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(46, 44);
			this->button8->TabIndex = 7;
			this->button8->Text = L"9";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button9->Location = System::Drawing::Point(6, 205);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(46, 44);
			this->button9->TabIndex = 8;
			this->button9->Text = L"1";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button10->Location = System::Drawing::Point(6, 155);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(46, 44);
			this->button10->TabIndex = 9;
			this->button10->Text = L"4";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button11->Location = System::Drawing::Point(58, 155);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(46, 44);
			this->button11->TabIndex = 10;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button12->Location = System::Drawing::Point(110, 155);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(46, 44);
			this->button12->TabIndex = 11;
			this->button12->Text = L"6";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button13->Location = System::Drawing::Point(58, 205);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(46, 44);
			this->button13->TabIndex = 12;
			this->button13->Text = L"2";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button14->Location = System::Drawing::Point(110, 205);
			this->button14->Name = L"button14";
			this->button14->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button14->Size = System::Drawing::Size(46, 44);
			this->button14->TabIndex = 13;
			this->button14->Text = L"3";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button15->Location = System::Drawing::Point(6, 255);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(98, 44);
			this->button15->TabIndex = 14;
			this->button15->Text = L"0";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// btn_point
			// 
			this->btn_point->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btn_point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->btn_point->Location = System::Drawing::Point(110, 255);
			this->btn_point->Name = L"btn_point";
			this->btn_point->Size = System::Drawing::Size(46, 44);
			this->btn_point->TabIndex = 15;
			this->btn_point->Text = L".";
			this->btn_point->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button1->Location = System::Drawing::Point(6, 55);
			this->button1->Name = L"button1";
			this->button1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button1->Size = System::Drawing::Size(46, 44);
			this->button1->TabIndex = 16;
			this->button1->Text = L"CE";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// Calcula
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(215, 308);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_point);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->btn_division);
			this->Controls->Add(this->btn_multiply);
			this->Controls->Add(this->btn_mines);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->btn_equals);
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
private: System::Void btn_division_Click(System::Object^ sender, System::EventArgs^ e) {
}
};



}
	