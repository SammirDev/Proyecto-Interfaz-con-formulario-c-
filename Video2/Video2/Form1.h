#pragma once

namespace CppCLRWinFormsProject {

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
	private: System::Windows::Forms::Button^ btn_cambiar;
	private: System::Windows::Forms::Label^ lbl_mensaje;
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
			this->btn_cambiar = (gcnew System::Windows::Forms::Button());
			this->lbl_mensaje = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_cambiar
			// 
			this->btn_cambiar->BackColor = System::Drawing::SystemColors::HotTrack;
			this->btn_cambiar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_cambiar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cambiar->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_cambiar->Location = System::Drawing::Point(26, 95);
			this->btn_cambiar->Name = L"btn_cambiar";
			this->btn_cambiar->Size = System::Drawing::Size(156, 56);
			this->btn_cambiar->TabIndex = 0;
			this->btn_cambiar->Text = L"Cambiar Texto ";
			this->btn_cambiar->UseVisualStyleBackColor = false;
			this->btn_cambiar->Click += gcnew System::EventHandler(this, &Form1::btn_cambiar_Click);
			// 
			// lbl_mensaje
			// 
			this->lbl_mensaje->AutoSize = true;
			this->lbl_mensaje->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_mensaje->Location = System::Drawing::Point(12, 57);
			this->lbl_mensaje->Name = L"lbl_mensaje";
			this->lbl_mensaje->Size = System::Drawing::Size(182, 25);
			this->lbl_mensaje->TabIndex = 1;
			this->lbl_mensaje->Text = L"No se ha dado click";
			this->lbl_mensaje->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(213, 202);
			this->Controls->Add(this->lbl_mensaje);
			this->Controls->Add(this->btn_cambiar);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void btn_cambiar_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->lbl_mensaje->Text == "Texto Uno")
			{
				this->lbl_mensaje->Text = "Texto Dos";
			}
			else
			{
				this->lbl_mensaje->Text = "Texto Uno";
			}
		}
	private: System::Void Form2_load(System::Object^ sender, System::EventArgs^ e) {
		this->lbl_mensaje->Text = "Se cambiaran los textos conforme de click";
		}
	};
}
