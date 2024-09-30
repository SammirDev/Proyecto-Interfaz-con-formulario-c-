#pragma once
#include<string>
namespace CppCLRWinFormsProject {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_saludar;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_edad;
	private: System::Windows::Forms::TextBox^ txt_nombre;

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
			this->btn_saludar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_edad = (gcnew System::Windows::Forms::TextBox());
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btn_saludar
			// 
			this->btn_saludar->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->btn_saludar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_saludar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_saludar->Location = System::Drawing::Point(78, 161);
			this->btn_saludar->Name = L"btn_saludar";
			this->btn_saludar->Size = System::Drawing::Size(276, 55);
			this->btn_saludar->TabIndex = 0;
			this->btn_saludar->Text = L"Saludar";
			this->btn_saludar->UseVisualStyleBackColor = false;
			this->btn_saludar->Click += gcnew System::EventHandler(this, &Form1::btn_saludar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(74, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Info;
			this->label2->Location = System::Drawing::Point(74, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Edad";
			// 
			// txt_edad
			// 
			this->txt_edad->BackColor = System::Drawing::SystemColors::Info;
			this->txt_edad->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_edad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_edad->Location = System::Drawing::Point(164, 113);
			this->txt_edad->Multiline = true;
			this->txt_edad->Name = L"txt_edad";
			this->txt_edad->Size = System::Drawing::Size(205, 26);
			this->txt_edad->TabIndex = 3;
			// 
			// txt_nombre
			// 
			this->txt_nombre->BackColor = System::Drawing::SystemColors::Info;
			this->txt_nombre->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nombre->Location = System::Drawing::Point(164, 76);
			this->txt_nombre->Multiline = true;
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(205, 26);
			this->txt_nombre->TabIndex = 4;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(426, 239);
			this->Controls->Add(this->txt_nombre);
			this->Controls->Add(this->txt_edad);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_saludar);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			private: System::Void btn_saludar_Click(System::Object^ sender, System::EventArgs^ e) {
				string nombre = this->toStandardString(this->txt_nombre->Text);
				string edad = this->toStandardString(this->txt_edad->Text);
				if (nombre == "Oliver") {
					MessageBox::Show(L"Hola " + this->toSystemString(nombre));
				}
				else {
					MessageBox::Show(L"Usuario Equivocado");
				}
			}

		private: static string toStandardString(System::String^ string) {
			using System::Runtime::InteropServices::Marshal;
			System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
			char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
			std::string returnString(charPointer, string->Length);
			Marshal::FreeHGlobal(pointer);
			return returnString;
		}

		private: static String^ toSystemString(std::string str) {
			return gcnew String(str.c_str());
		}
};
}
