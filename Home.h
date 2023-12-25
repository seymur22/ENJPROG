#pragma once
#include "Enginer1.h"
#include "Enginer2.h"
#include "Enginer3.h"
#include "Enginer4.h"
#include "Enginer5.h"
#include "Enginer6.h"
#include "Enginer7.h"
#include "Enginer8.h"
#include "Enginer9.h"
#include "Enginer10.h"
#include "Enginer11.h"
#include "Enginer12.h"
#include "Enginer13.h"
#include "Enginer14.h"
#include "Enginer15.h"
#include "Enginer16.h"
#include "Enginer17.h"
#include "Enginer18.h"
#include "Enginer19.h"
#include "Enginer20.h"
#include "Enginer21.h"
namespace ENJPROG {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		Home(void)
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
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ engi1;
	protected:

	private: System::Windows::Forms::Button^ engi2;
	private: System::Windows::Forms::Button^ engi3;
	private: System::Windows::Forms::Button^ engi4;
	private: System::Windows::Forms::Button^ engi5;
	private: System::Windows::Forms::Button^ engi6;
	private: System::Windows::Forms::Button^ engi7;
	private: System::Windows::Forms::Button^ engi8;
	private: System::Windows::Forms::Button^ engi9;
	private: System::Windows::Forms::Button^ engi10;
	private: System::Windows::Forms::Button^ engi11;
	private: System::Windows::Forms::Button^ engi12;
	private: System::Windows::Forms::Button^ engi13;
	private: System::Windows::Forms::Button^ engi14;
	private: System::Windows::Forms::Button^ engi15;
	private: System::Windows::Forms::Button^ engi16;
	private: System::Windows::Forms::Button^ engi17;
	private: System::Windows::Forms::Button^ engi18;
	private: System::Windows::Forms::Button^ engi19;
	private: System::Windows::Forms::Button^ engi20;
	private: System::Windows::Forms::Button^ engi21;













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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->engi1 = (gcnew System::Windows::Forms::Button());
			this->engi2 = (gcnew System::Windows::Forms::Button());
			this->engi3 = (gcnew System::Windows::Forms::Button());
			this->engi4 = (gcnew System::Windows::Forms::Button());
			this->engi5 = (gcnew System::Windows::Forms::Button());
			this->engi6 = (gcnew System::Windows::Forms::Button());
			this->engi7 = (gcnew System::Windows::Forms::Button());
			this->engi8 = (gcnew System::Windows::Forms::Button());
			this->engi9 = (gcnew System::Windows::Forms::Button());
			this->engi10 = (gcnew System::Windows::Forms::Button());
			this->engi11 = (gcnew System::Windows::Forms::Button());
			this->engi12 = (gcnew System::Windows::Forms::Button());
			this->engi13 = (gcnew System::Windows::Forms::Button());
			this->engi14 = (gcnew System::Windows::Forms::Button());
			this->engi15 = (gcnew System::Windows::Forms::Button());
			this->engi16 = (gcnew System::Windows::Forms::Button());
			this->engi17 = (gcnew System::Windows::Forms::Button());
			this->engi18 = (gcnew System::Windows::Forms::Button());
			this->engi19 = (gcnew System::Windows::Forms::Button());
			this->engi20 = (gcnew System::Windows::Forms::Button());
			this->engi21 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Get Chose";
			// 
			// engi1
			// 
			this->engi1->BackColor = System::Drawing::Color::Bisque;
			this->engi1->Dock = System::Windows::Forms::DockStyle::Top;
			this->engi1->Location = System::Drawing::Point(0, 32);
			this->engi1->Name = L"engi1";
			this->engi1->Size = System::Drawing::Size(614, 37);
			this->engi1->TabIndex = 1;
			this->engi1->Text = L"1. Mechanical Engin.";
			this->engi1->UseVisualStyleBackColor = false;
			this->engi1->Click += gcnew System::EventHandler(this, &Home::engi1_click);
			// 
			// engi2
			// 
			this->engi2->BackColor = System::Drawing::Color::Bisque;
			this->engi2->Dock = System::Windows::Forms::DockStyle::Top;
			this->engi2->Location = System::Drawing::Point(0, 69);
			this->engi2->Name = L"engi2";
			this->engi2->Size = System::Drawing::Size(614, 37);
			this->engi2->TabIndex = 2;
			this->engi2->Text = L"2.Computer Engin.";
			this->engi2->UseVisualStyleBackColor = false;
			this->engi2->Click += gcnew System::EventHandler(this, &Home::engi2_click);
			// 
			// engi3
			// 
			this->engi3->BackColor = System::Drawing::Color::Bisque;
			this->engi3->Dock = System::Windows::Forms::DockStyle::Top;
			this->engi3->Location = System::Drawing::Point(0, 106);
			this->engi3->Name = L"engi3";
			this->engi3->Size = System::Drawing::Size(614, 37);
			this->engi3->TabIndex = 3;
			this->engi3->Text = L"3.Chemical Engin.";
			this->engi3->UseVisualStyleBackColor = false;
			this->engi3->Click += gcnew System::EventHandler(this, &Home::engi3_Click);
			// 
			// engi4
			// 
			this->engi4->BackColor = System::Drawing::Color::Bisque;
			this->engi4->Dock = System::Windows::Forms::DockStyle::Top;
			this->engi4->Location = System::Drawing::Point(0, 143);
			this->engi4->Name = L"engi4";
			this->engi4->Size = System::Drawing::Size(614, 37);
			this->engi4->TabIndex = 4;
			this->engi4->Text = L"4.Industrial Engin.";
			this->engi4->UseVisualStyleBackColor = false;
			this->engi4->Click += gcnew System::EventHandler(this, &Home::engi4_Click);
			// 
			// engi5
			// 
			this->engi5->BackColor = System::Drawing::Color::Bisque;
			this->engi5->Dock = System::Windows::Forms::DockStyle::Top;
			this->engi5->Location = System::Drawing::Point(0, 180);
			this->engi5->Name = L"engi5";
			this->engi5->Size = System::Drawing::Size(614, 37);
			this->engi5->TabIndex = 5;
			this->engi5->Text = L"5.Information Systems Engin.";
			this->engi5->UseVisualStyleBackColor = false;
			this->engi5->Click += gcnew System::EventHandler(this, &Home::engi5_Click);
			// 
			// engi6
			// 
			this->engi6->BackColor = System::Drawing::Color::Bisque;
			this->engi6->Dock = System::Windows::Forms::DockStyle::Top;
			this->engi6->Location = System::Drawing::Point(0, 217);
			this->engi6->Name = L"engi6";
			this->engi6->Size = System::Drawing::Size(614, 37);
			this->engi6->TabIndex = 6;
			this->engi6->Text = L"6.Software Engin.";
			this->engi6->UseVisualStyleBackColor = false;
			this->engi6->Click += gcnew System::EventHandler(this, &Home::engi6_Click);
			// 
			// engi7
			// 
			this->engi7->BackColor = System::Drawing::Color::Bisque;
			this->engi7->Dock = System::Windows::Forms::DockStyle::Top;
			this->engi7->Location = System::Drawing::Point(0, 254);
			this->engi7->Name = L"engi7";
			this->engi7->Size = System::Drawing::Size(614, 37);
			this->engi7->TabIndex = 7;
			this->engi7->Text = L"7.Mathematical Engin.";
			this->engi7->UseVisualStyleBackColor = false;
			this->engi7->Click += gcnew System::EventHandler(this, &Home::engi7_Click);
			// 
			// engi8
			// 
			this->engi8->BackColor = System::Drawing::Color::Bisque;
			this->engi8->Dock = System::Windows::Forms::DockStyle::Top;
			this->engi8->Location = System::Drawing::Point(0, 291);
			this->engi8->Name = L"engi8";
			this->engi8->Size = System::Drawing::Size(614, 37);
			this->engi8->TabIndex = 8;
			this->engi8->Text = L"8.Environmental Engin.";
			this->engi8->UseVisualStyleBackColor = false;
			this->engi8->Click += gcnew System::EventHandler(this, &Home::engi8_Click);
			// 
			// engi9
			// 
			this->engi9->BackColor = System::Drawing::Color::Bisque;
			this->engi9->Dock = System::Windows::Forms::DockStyle::Top;
			this->engi9->Location = System::Drawing::Point(0, 328);
			this->engi9->Name = L"engi9";
			this->engi9->Size = System::Drawing::Size(614, 37);
			this->engi9->TabIndex = 9;
			this->engi9->Text = L"9.The Food Engin.";
			this->engi9->UseVisualStyleBackColor = false;
			this->engi9->Click += gcnew System::EventHandler(this, &Home::engi9_Click);
			// 
			// engi10
			// 
			this->engi10->BackColor = System::Drawing::Color::Bisque;
			this->engi10->Dock = System::Windows::Forms::DockStyle::Top;
			this->engi10->Location = System::Drawing::Point(0, 365);
			this->engi10->Name = L"engi10";
			this->engi10->Size = System::Drawing::Size(614, 37);
			this->engi10->TabIndex = 10;
			this->engi10->Text = L"10.Biyomedikal Mühendisliği.";
			this->engi10->UseVisualStyleBackColor = false;
			this->engi10->Click += gcnew System::EventHandler(this, &Home::engi10_Click);
			// 
			// engi11
			// 
			this->engi11->BackColor = System::Drawing::Color::Bisque;
			this->engi11->Dock = System::Windows::Forms::DockStyle::Top;
			this->engi11->Location = System::Drawing::Point(0, 402);
			this->engi11->Name = L"engi11";
			this->engi11->Size = System::Drawing::Size(614, 37);
			this->engi11->TabIndex = 11;
			this->engi11->Text = L"11.Geological Engin.";
			this->engi11->UseVisualStyleBackColor = false;
			this->engi11->Click += gcnew System::EventHandler(this, &Home::engi11_Click);
			// 
			// engi12
			// 
			this->engi12->BackColor = System::Drawing::Color::Bisque;
			this->engi12->Dock = System::Windows::Forms::DockStyle::Top;
			this->engi12->Location = System::Drawing::Point(0, 439);
			this->engi12->Name = L"engi12";
			this->engi12->Size = System::Drawing::Size(614, 37);
			this->engi12->TabIndex = 12;
			this->engi12->Text = L"12.Energy Systems Engin.";
			this->engi12->UseVisualStyleBackColor = false;
			this->engi12->Click += gcnew System::EventHandler(this, &Home::engi12_Click);
			// 
			// engi13
			// 
			this->engi13->BackColor = System::Drawing::Color::Bisque;
			this->engi13->Dock = System::Windows::Forms::DockStyle::Top;
			this->engi13->Location = System::Drawing::Point(0, 476);
			this->engi13->Name = L"engi13";
			this->engi13->Size = System::Drawing::Size(614, 37);
			this->engi13->TabIndex = 13;
			this->engi13->Text = L"13.Electrical electronics Engin.";
			this->engi13->UseVisualStyleBackColor = false;
			this->engi13->Click += gcnew System::EventHandler(this, &Home::engi13_Click);
			// 
			// engi14
			// 
			this->engi14->BackColor = System::Drawing::Color::Bisque;
			this->engi14->Dock = System::Windows::Forms::DockStyle::Top;
			this->engi14->Location = System::Drawing::Point(0, 513);
			this->engi14->Name = L"engi14";
			this->engi14->Size = System::Drawing::Size(614, 37);
			this->engi14->TabIndex = 14;
			this->engi14->Text = L"14.Civil Engin.";
			this->engi14->UseVisualStyleBackColor = false;
			this->engi14->Click += gcnew System::EventHandler(this, &Home::engi14_Click);
			// 
			// engi15
			// 
			this->engi15->BackColor = System::Drawing::Color::Bisque;
			this->engi15->Dock = System::Windows::Forms::DockStyle::Top;
			this->engi15->Location = System::Drawing::Point(0, 550);
			this->engi15->Name = L"engi15";
			this->engi15->Size = System::Drawing::Size(614, 37);
			this->engi15->TabIndex = 15;
			this->engi15->Text = L"15.Nuclear Energy Engin.";
			this->engi15->UseVisualStyleBackColor = false;
			this->engi15->Click += gcnew System::EventHandler(this, &Home::engi15_Click);
			// 
			// engi16
			// 
			this->engi16->BackColor = System::Drawing::Color::Bisque;
			this->engi16->Dock = System::Windows::Forms::DockStyle::Top;
			this->engi16->Location = System::Drawing::Point(0, 587);
			this->engi16->Name = L"engi16";
			this->engi16->Size = System::Drawing::Size(614, 37);
			this->engi16->TabIndex = 16;
			this->engi16->Text = L"16.Aerospace Engin.";
			this->engi16->UseVisualStyleBackColor = false;
			this->engi16->Click += gcnew System::EventHandler(this, &Home::engi16_Click);
			// 
			// engi17
			// 
			this->engi17->BackColor = System::Drawing::Color::Bisque;
			this->engi17->Dock = System::Windows::Forms::DockStyle::Top;
			this->engi17->Location = System::Drawing::Point(0, 624);
			this->engi17->Name = L"engi17";
			this->engi17->Size = System::Drawing::Size(614, 37);
			this->engi17->TabIndex = 17;
			this->engi17->Text = L"17.Petroleum Engin.";
			this->engi17->UseVisualStyleBackColor = false;
			this->engi17->Click += gcnew System::EventHandler(this, &Home::engi17_Click);
			// 
			// engi18
			// 
			this->engi18->BackColor = System::Drawing::Color::Bisque;
			this->engi18->Dock = System::Windows::Forms::DockStyle::Top;
			this->engi18->Location = System::Drawing::Point(0, 661);
			this->engi18->Name = L"engi18";
			this->engi18->Size = System::Drawing::Size(614, 37);
			this->engi18->TabIndex = 18;
			this->engi18->Text = L"18.Agriculture Engin.";
			this->engi18->UseVisualStyleBackColor = false;
			this->engi18->Click += gcnew System::EventHandler(this, &Home::engi18_Click);
			// 
			// engi19
			// 
			this->engi19->BackColor = System::Drawing::Color::Bisque;
			this->engi19->Dock = System::Windows::Forms::DockStyle::Top;
			this->engi19->Location = System::Drawing::Point(0, 698);
			this->engi19->Name = L"engi19";
			this->engi19->Size = System::Drawing::Size(614, 37);
			this->engi19->TabIndex = 19;
			this->engi19->Text = L"19.Automotive Engin.";
			this->engi19->UseVisualStyleBackColor = false;
			this->engi19->Click += gcnew System::EventHandler(this, &Home::engi19_Click);
			// 
			// engi20
			// 
			this->engi20->BackColor = System::Drawing::Color::Bisque;
			this->engi20->Dock = System::Windows::Forms::DockStyle::Top;
			this->engi20->Location = System::Drawing::Point(0, 735);
			this->engi20->Name = L"engi20";
			this->engi20->Size = System::Drawing::Size(614, 37);
			this->engi20->TabIndex = 20;
			this->engi20->Text = L"20.Textile Engin.";
			this->engi20->UseVisualStyleBackColor = false;
			this->engi20->Click += gcnew System::EventHandler(this, &Home::engi20_Click);
			// 
			// engi21
			// 
			this->engi21->BackColor = System::Drawing::Color::Bisque;
			this->engi21->Dock = System::Windows::Forms::DockStyle::Top;
			this->engi21->Location = System::Drawing::Point(0, 772);
			this->engi21->Name = L"engi21";
			this->engi21->Size = System::Drawing::Size(614, 37);
			this->engi21->TabIndex = 21;
			this->engi21->Text = L"21.Material Science and Engin.";
			this->engi21->UseVisualStyleBackColor = false;
			this->engi21->Click += gcnew System::EventHandler(this, &Home::engi21_Click);
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::RosyBrown;
			this->ClientSize = System::Drawing::Size(635, 750);
			this->Controls->Add(this->engi21);
			this->Controls->Add(this->engi20);
			this->Controls->Add(this->engi19);
			this->Controls->Add(this->engi18);
			this->Controls->Add(this->engi17);
			this->Controls->Add(this->engi16);
			this->Controls->Add(this->engi15);
			this->Controls->Add(this->engi14);
			this->Controls->Add(this->engi13);
			this->Controls->Add(this->engi12);
			this->Controls->Add(this->engi11);
			this->Controls->Add(this->engi10);
			this->Controls->Add(this->engi9);
			this->Controls->Add(this->engi8);
			this->Controls->Add(this->engi7);
			this->Controls->Add(this->engi6);
			this->Controls->Add(this->engi5);
			this->Controls->Add(this->engi4);
			this->Controls->Add(this->engi3);
			this->Controls->Add(this->engi2);
			this->Controls->Add(this->engi1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Home";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Home";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void engi1_click(System::Object^ sender, System::EventArgs^ e) {
		Enginer1^ engin1 = gcnew Enginer1();
		engin1->Show();
	}
	private: System::Void engi2_click(System::Object^ sender, System::EventArgs^ e) {
		Enginer2^ engin2 = gcnew Enginer2();
		engin2->Show();
	}
private: System::Void engi3_Click(System::Object^ sender, System::EventArgs^ e) {
		Enginer3^ engin3 = gcnew Enginer3();
		engin3->Show();
}
private: System::Void engi4_Click(System::Object^ sender, System::EventArgs^ e) {
		Enginer4^ engin4 = gcnew Enginer4();
		engin4->Show();
}

private: System::Void engi8_Click(System::Object^ sender, System::EventArgs^ e) {
		Enginer8^ engin8 = gcnew Enginer8();
		engin8->Show();
}
private: System::Void engi5_Click(System::Object^ sender, System::EventArgs^ e) {
		Enginer5^ engin5 = gcnew Enginer5();
		engin5->Show();
}
private: System::Void engi6_Click(System::Object^ sender, System::EventArgs^ e) {
		Enginer6^ engin6 = gcnew Enginer6();
		engin6->Show();
}
private: System::Void engi7_Click(System::Object^ sender, System::EventArgs^ e) {
		Enginer7^ engin7 = gcnew Enginer7();
		engin7->Show();
}
private: System::Void engi9_Click(System::Object^ sender, System::EventArgs^ e) {
		Enginer9^ engin9 = gcnew Enginer9();
		engin9->Show();
}
private: System::Void engi10_Click(System::Object^ sender, System::EventArgs^ e) {
		Enginer10^ engin10 = gcnew Enginer10();
		engin10->Show();
}
private: System::Void engi11_Click(System::Object^ sender, System::EventArgs^ e) {
		Enginer11^ engin11 = gcnew Enginer11();
		engin11->Show();
}
private: System::Void engi12_Click(System::Object^ sender, System::EventArgs^ e) {
		Enginer12^ engin12 = gcnew Enginer12();
		engin12->Show();
}
private: System::Void engi13_Click(System::Object^ sender, System::EventArgs^ e) {
		Enginer13^ engin13 = gcnew Enginer13();
		engin13->Show();
}
private: System::Void engi14_Click(System::Object^ sender, System::EventArgs^ e) {
		Enginer14^ engin14 = gcnew Enginer14();
		engin14->Show();
}
private: System::Void engi15_Click(System::Object^ sender, System::EventArgs^ e) {
		Enginer15^ engin15 = gcnew Enginer15();
		engin15->Show();
}
private: System::Void engi16_Click(System::Object^ sender, System::EventArgs^ e) {
		Enginer16^ engin16 = gcnew Enginer16();
		engin16->Show();
}
private: System::Void engi17_Click(System::Object^ sender, System::EventArgs^ e) {
		Enginer17^ engin17 = gcnew Enginer17();
		engin17->Show();
}
private: System::Void engi18_Click(System::Object^ sender, System::EventArgs^ e) {
		Enginer18^ engin18 = gcnew Enginer18();
		engin18->Show();
}
private: System::Void engi19_Click(System::Object^ sender, System::EventArgs^ e) {
		Enginer19^ engin19 = gcnew Enginer19();
		engin19->Show();
}
private: System::Void engi20_Click(System::Object^ sender, System::EventArgs^ e) {
		Enginer20^ engin20 = gcnew Enginer20();
		engin20->Show();
}
private: System::Void engi21_Click(System::Object^ sender, System::EventArgs^ e) {
		Enginer21^ engin21 = gcnew Enginer21();
		engin21->Show();
}
};
}
