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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;




















	private: System::Windows::Forms::Panel^ panel9;


	private: System::Windows::Forms::Panel^ panel8;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
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

	protected:




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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(392, 107);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label1->Size = System::Drawing::Size(63, 70);
			this->label1->TabIndex = 0;
			this->label1->Text = L"0";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel2->Controls->Add(this->panel9);
			this->panel2->Controls->Add(this->panel8);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 107);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(392, 471);
			this->panel2->TabIndex = 1;
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->button5);
			this->panel9->Controls->Add(this->button4);
			this->panel9->Controls->Add(this->button1);
			this->panel9->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel9->Location = System::Drawing::Point(294, 0);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(98, 471);
			this->panel9->TabIndex = 4;
			// 
			// button5
			// 
			this->button5->Dock = System::Windows::Forms::DockStyle::Top;
			this->button5->Location = System::Drawing::Point(0, 276);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(98, 192);
			this->button5->TabIndex = 2;
			this->button5->Text = L"=";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Dock = System::Windows::Forms::DockStyle::Top;
			this->button4->Location = System::Drawing::Point(0, 92);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(98, 184);
			this->button4->TabIndex = 1;
			this->button4->Text = L"+";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 92);
			this->button1->TabIndex = 0;
			this->button1->Text = L"-";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->panel3);
			this->panel8->Controls->Add(this->panel4);
			this->panel8->Controls->Add(this->panel7);
			this->panel8->Controls->Add(this->panel5);
			this->panel8->Controls->Add(this->panel6);
			this->panel8->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel8->Location = System::Drawing::Point(0, 0);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(294, 471);
			this->panel8->TabIndex = 3;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button17);
			this->panel3->Controls->Add(this->button16);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 368);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(294, 100);
			this->panel3->TabIndex = 3;
			// 
			// button17
			// 
			this->button17->Dock = System::Windows::Forms::DockStyle::Left;
			this->button17->Location = System::Drawing::Point(194, 0);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(100, 100);
			this->button17->TabIndex = 1;
			this->button17->Text = L".";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Calcula::btn_click);
			// 
			// button16
			// 
			this->button16->Dock = System::Windows::Forms::DockStyle::Left;
			this->button16->Location = System::Drawing::Point(0, 0);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(194, 100);
			this->button16->TabIndex = 0;
			this->button16->Text = L"0";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Calcula::btn_click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->button15);
			this->panel4->Controls->Add(this->button14);
			this->panel4->Controls->Add(this->button13);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 276);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(294, 92);
			this->panel4->TabIndex = 1;
			// 
			// button15
			// 
			this->button15->Dock = System::Windows::Forms::DockStyle::Left;
			this->button15->Location = System::Drawing::Point(194, 0);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(100, 92);
			this->button15->TabIndex = 2;
			this->button15->Text = L"3";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Calcula::btn_click);
			// 
			// button14
			// 
			this->button14->Dock = System::Windows::Forms::DockStyle::Left;
			this->button14->Location = System::Drawing::Point(97, 0);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(97, 92);
			this->button14->TabIndex = 1;
			this->button14->Text = L"2";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Calcula::btn_click);
			// 
			// button13
			// 
			this->button13->Dock = System::Windows::Forms::DockStyle::Left;
			this->button13->Location = System::Drawing::Point(0, 0);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(97, 92);
			this->button13->TabIndex = 0;
			this->button13->Text = L"1";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Calcula::btn_click);
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->button12);
			this->panel7->Controls->Add(this->button11);
			this->panel7->Controls->Add(this->button10);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel7->Location = System::Drawing::Point(0, 184);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(294, 92);
			this->panel7->TabIndex = 1;
			// 
			// button12
			// 
			this->button12->Dock = System::Windows::Forms::DockStyle::Left;
			this->button12->Location = System::Drawing::Point(194, 0);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(100, 92);
			this->button12->TabIndex = 2;
			this->button12->Text = L"6";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Calcula::btn_click);
			// 
			// button11
			// 
			this->button11->Dock = System::Windows::Forms::DockStyle::Left;
			this->button11->Location = System::Drawing::Point(97, 0);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(97, 92);
			this->button11->TabIndex = 1;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Calcula::btn_click);
			// 
			// button10
			// 
			this->button10->Dock = System::Windows::Forms::DockStyle::Left;
			this->button10->Location = System::Drawing::Point(0, 0);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(97, 92);
			this->button10->TabIndex = 0;
			this->button10->Text = L"4";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Calcula::btn_click);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->button9);
			this->panel5->Controls->Add(this->button8);
			this->panel5->Controls->Add(this->button7);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(0, 92);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(294, 92);
			this->panel5->TabIndex = 1;
			// 
			// button9
			// 
			this->button9->Dock = System::Windows::Forms::DockStyle::Left;
			this->button9->Location = System::Drawing::Point(194, 0);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 92);
			this->button9->TabIndex = 2;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Calcula::btn_click);
			// 
			// button8
			// 
			this->button8->Dock = System::Windows::Forms::DockStyle::Left;
			this->button8->Location = System::Drawing::Point(97, 0);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(97, 92);
			this->button8->TabIndex = 1;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Calcula::btn_click);
			// 
			// button7
			// 
			this->button7->Dock = System::Windows::Forms::DockStyle::Left;
			this->button7->Location = System::Drawing::Point(0, 0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(97, 92);
			this->button7->TabIndex = 0;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Calcula::btn_click);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->button6);
			this->panel6->Controls->Add(this->button3);
			this->panel6->Controls->Add(this->button2);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(0, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(294, 92);
			this->panel6->TabIndex = 2;
			// 
			// button6
			// 
			this->button6->Dock = System::Windows::Forms::DockStyle::Left;
			this->button6->Location = System::Drawing::Point(194, 0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 92);
			this->button6->TabIndex = 2;
			this->button6->Text = L"/";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Dock = System::Windows::Forms::DockStyle::Left;
			this->button3->Location = System::Drawing::Point(97, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(97, 92);
			this->button3->TabIndex = 1;
			this->button3->Text = L"*";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Left;
			this->button2->Location = System::Drawing::Point(0, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 92);
			this->button2->TabIndex = 0;
			this->button2->Text = L"CE";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// Calcula
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(392, 578);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->MaximizeBox = false;
			this->Name = L"Calcula";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->Text = L"Calcula";
			this->Load += gcnew System::EventHandler(this, &Calcula::Calcula_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->ResumeLayout(false);

		}
		
#pragma endregion
	private: System::Void Calcula_Load(System::Object^ sender, System::EventArgs^ e) {

		
		

	}

	private: System::Void btn_click(System::Object^ sender, System::EventArgs^ e) {
		Button^ btn_pushed = safe_cast<Button^>(sender);
		label1->Text += btn_pushed->Text;
	}
};
}
