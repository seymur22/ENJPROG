#pragma once
#include "Enginer1.h"
#include "Enginer2.h"
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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Get Chose";
			// 
			// engi1
			// 
			this->engi1->BackColor = System::Drawing::Color::Bisque;
			this->engi1->Location = System::Drawing::Point(19, 59);
			this->engi1->Name = L"engi1";
			this->engi1->Size = System::Drawing::Size(159, 37);
			this->engi1->TabIndex = 1;
			this->engi1->Text = L"1. Mechanical Engin.";
			this->engi1->UseVisualStyleBackColor = false;
			this->engi1->Click += gcnew System::EventHandler(this, &Home::engi1_click);
			// 
			// engi2
			// 
			this->engi2->BackColor = System::Drawing::Color::Bisque;
			this->engi2->Location = System::Drawing::Point(19, 102);
			this->engi2->Name = L"engi2";
			this->engi2->Size = System::Drawing::Size(159, 37);
			this->engi2->TabIndex = 2;
			this->engi2->Text = L"2.Computer Engin.";
			this->engi2->UseVisualStyleBackColor = false;
			this->engi2->Click += gcnew System::EventHandler(this, &Home::engi2_click);
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::RosyBrown;
			this->ClientSize = System::Drawing::Size(642, 362);
			this->Controls->Add(this->engi2);
			this->Controls->Add(this->engi1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Home";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Home";
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
		this->Hide();
	}
};
}
