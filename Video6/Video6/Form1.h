#pragma once
#include "Inicio.h"
#include "Clientes.h"
#include "Ventas.h"
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
	private: System::Windows::Forms::Panel^ panel_lateral;
	protected:
	private: System::Windows::Forms::Panel^ panel_contenedor;
	private: System::Windows::Forms::Button^ btn_ventas;

	private: System::Windows::Forms::Button^ btn_clientes;

	private: System::Windows::Forms::Button^ btn_inicio;
	private: System::Windows::Forms::Panel^ margen;

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
			this->panel_lateral = (gcnew System::Windows::Forms::Panel());
			this->btn_ventas = (gcnew System::Windows::Forms::Button());
			this->btn_clientes = (gcnew System::Windows::Forms::Button());
			this->btn_inicio = (gcnew System::Windows::Forms::Button());
			this->margen = (gcnew System::Windows::Forms::Panel());
			this->panel_contenedor = (gcnew System::Windows::Forms::Panel());
			this->panel_lateral->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_lateral
			// 
			this->panel_lateral->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel_lateral->Controls->Add(this->btn_ventas);
			this->panel_lateral->Controls->Add(this->btn_clientes);
			this->panel_lateral->Controls->Add(this->btn_inicio);
			this->panel_lateral->Controls->Add(this->margen);
			this->panel_lateral->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_lateral->Location = System::Drawing::Point(0, 0);
			this->panel_lateral->Name = L"panel_lateral";
			this->panel_lateral->Size = System::Drawing::Size(260, 526);
			this->panel_lateral->TabIndex = 0;
			// 
			// btn_ventas
			// 
			this->btn_ventas->BackColor = System::Drawing::Color::White;
			this->btn_ventas->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_ventas->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_ventas->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_ventas->Location = System::Drawing::Point(0, 290);
			this->btn_ventas->Name = L"btn_ventas";
			this->btn_ventas->Size = System::Drawing::Size(260, 40);
			this->btn_ventas->TabIndex = 3;
			this->btn_ventas->Text = L"Ventas";
			this->btn_ventas->UseVisualStyleBackColor = false;
			this->btn_ventas->Click += gcnew System::EventHandler(this, &Form1::btn_ventas_Click);
			// 
			// btn_clientes
			// 
			this->btn_clientes->BackColor = System::Drawing::Color::White;
			this->btn_clientes->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_clientes->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_clientes->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_clientes->Location = System::Drawing::Point(0, 250);
			this->btn_clientes->Name = L"btn_clientes";
			this->btn_clientes->Size = System::Drawing::Size(260, 40);
			this->btn_clientes->TabIndex = 2;
			this->btn_clientes->Text = L"Clientes";
			this->btn_clientes->UseVisualStyleBackColor = false;
			this->btn_clientes->Click += gcnew System::EventHandler(this, &Form1::btn_clientes_Click);
			// 
			// btn_inicio
			// 
			this->btn_inicio->BackColor = System::Drawing::Color::White;
			this->btn_inicio->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_inicio->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_inicio->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_inicio->Location = System::Drawing::Point(0, 210);
			this->btn_inicio->Name = L"btn_inicio";
			this->btn_inicio->Size = System::Drawing::Size(260, 40);
			this->btn_inicio->TabIndex = 1;
			this->btn_inicio->Text = L"Inicio";
			this->btn_inicio->UseVisualStyleBackColor = false;
			this->btn_inicio->Click += gcnew System::EventHandler(this, &Form1::btn_inicio_Click);
			// 
			// margen
			// 
			this->margen->Dock = System::Windows::Forms::DockStyle::Top;
			this->margen->Location = System::Drawing::Point(0, 0);
			this->margen->Name = L"margen";
			this->margen->Size = System::Drawing::Size(260, 210);
			this->margen->TabIndex = 0;
			// 
			// panel_contenedor
			// 
			this->panel_contenedor->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel_contenedor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_contenedor->Location = System::Drawing::Point(260, 0);
			this->panel_contenedor->Name = L"panel_contenedor";
			this->panel_contenedor->Size = System::Drawing::Size(584, 526);
			this->panel_contenedor->TabIndex = 1;
			this->panel_contenedor->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel_contenedor_Paint);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(844, 526);
			this->Controls->Add(this->panel_contenedor);
			this->Controls->Add(this->panel_lateral);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->panel_lateral->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		template<class T>
		void AbrirPanel(T FormHijo)
		{
			if (this->panel_contenedor->Controls->Count > 0)
			{
				this->panel_contenedor->Controls->RemoveAt(0);
			}
			FormHijo->TopLevel = false;
			FormHijo->Dock = DockStyle::Fill;
			this->panel_contenedor->Controls->Add(FormHijo);
			this->panel_contenedor->Tag = FormHijo;
			FormHijo->Show();
		}

	private: System::Void panel_contenedor_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void btn_inicio_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirPanel(gcnew Video6::inicio);
}
private: System::Void btn_clientes_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirPanel(gcnew Video6::Clientes);
}
private: System::Void btn_ventas_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirPanel(gcnew Video6::Ventas);
}
};
}
