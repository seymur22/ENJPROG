#pragma once

namespace ENJPROG {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Enginer16
	/// 	/// </summary>
	public ref class Enginer16 : public System::Windows::Forms::Form
	{
	public:
		Enginer16(void)
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
		~Enginer16()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ unengi1;
	private: System::Windows::Forms::Button^ unengi2;
	private: System::Windows::Forms::Button^ unengi3;
	private: System::Windows::Forms::Button^ unengi4;
	private: System::Windows::Forms::Button^ unengi5;









	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->unengi1 = (gcnew System::Windows::Forms::Button());
			this->unengi2 = (gcnew System::Windows::Forms::Button());
			this->unengi3 = (gcnew System::Windows::Forms::Button());
			this->unengi4 = (gcnew System::Windows::Forms::Button());
			this->unengi5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::RosyBrown;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(359, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Computer Engineering";
			// 
			// unengi1
			// 
			this->unengi1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->unengi1->Dock = System::Windows::Forms::DockStyle::Top;
			this->unengi1->Location = System::Drawing::Point(0, 40);
			this->unengi1->Name = L"unengi1";
			this->unengi1->Size = System::Drawing::Size(471, 37);
			this->unengi1->TabIndex = 4;
			this->unengi1->Text = L"1.";
			this->unengi1->UseVisualStyleBackColor = false;
			// 
			// unengi2
			// 
			this->unengi2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->unengi2->Dock = System::Windows::Forms::DockStyle::Top;
			this->unengi2->Location = System::Drawing::Point(0, 77);
			this->unengi2->Name = L"unengi2";
			this->unengi2->Size = System::Drawing::Size(471, 37);
			this->unengi2->TabIndex = 5;
			this->unengi2->Text = L"2.";
			this->unengi2->UseVisualStyleBackColor = false;
			// 
			// unengi3
			// 
			this->unengi3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->unengi3->Dock = System::Windows::Forms::DockStyle::Top;
			this->unengi3->Location = System::Drawing::Point(0, 114);
			this->unengi3->Name = L"unengi3";
			this->unengi3->Size = System::Drawing::Size(471, 37);
			this->unengi3->TabIndex = 6;
			this->unengi3->Text = L"3.";
			this->unengi3->UseVisualStyleBackColor = false;
			// 
			// unengi4
			// 
			this->unengi4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->unengi4->Dock = System::Windows::Forms::DockStyle::Top;
			this->unengi4->Location = System::Drawing::Point(0, 151);
			this->unengi4->Name = L"unengi4";
			this->unengi4->Size = System::Drawing::Size(471, 37);
			this->unengi4->TabIndex = 7;
			this->unengi4->Text = L"4.";
			this->unengi4->UseVisualStyleBackColor = false;
			this->unengi4->Click += gcnew System::EventHandler(this, &Enginer16::unengi4_Click);
			// 
			// unengi5
			// 
			this->unengi5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->unengi5->Dock = System::Windows::Forms::DockStyle::Top;
			this->unengi5->Location = System::Drawing::Point(0, 188);
			this->unengi5->Name = L"unengi5";
			this->unengi5->Size = System::Drawing::Size(471, 37);
			this->unengi5->TabIndex = 8;
			this->unengi5->Text = L"5.";
			this->unengi5->UseVisualStyleBackColor = false;
			this->unengi5->Click += gcnew System::EventHandler(this, &Enginer16::unengi5_Click);
			// 
			// Enginer16
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RosyBrown;
			this->ClientSize = System::Drawing::Size(471, 256);
			this->Controls->Add(this->unengi5);
			this->Controls->Add(this->unengi4);
			this->Controls->Add(this->unengi3);
			this->Controls->Add(this->unengi2);
			this->Controls->Add(this->unengi1);
			this->Controls->Add(this->label1);
			this->Name = L"Enginer16";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Enginer16";
			this->Load += gcnew System::EventHandler(this, &Enginer16::Enginer16_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Enginer16_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void unengi4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void unengi5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
