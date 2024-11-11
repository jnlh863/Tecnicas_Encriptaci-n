#pragma once
#include "Form1.h"

namespace Lopez_Hernandez_PIA_CripSeg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AcercaDe
	/// </summary>
	public ref class AcercaDe : public System::Windows::Forms::Form
	{
	public:
		AcercaDe(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~AcercaDe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(92, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(304, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Autor: Jahir Nicolás López Hernández\r\nMatricula: 1967014    ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(29, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(141, 21);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Cifrado de Cesar";
			this->label3->Click += gcnew System::EventHandler(this, &AcercaDe::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(196, 125);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(279, 48);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Consiste en sustituir cada letra del \r\nabecedario por una letra desplazada \r\nun n"
				L"úmero determinado de posiciones. ";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label4->Click += gcnew System::EventHandler(this, &AcercaDe::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(29, 220);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(167, 21);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Cifrado de Vigenere";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(217, 200);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(258, 64);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Consiste en la secuencia del cifrado\r\n de César con transformaciones \r\ndiferentes"
				L" para cada letra \r\n(polialfabético).";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// AcercaDe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->ClientSize = System::Drawing::Size(487, 333);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"AcercaDe";
			this->Text = L"AcercaDe";
			this->TransparencyKey = System::Drawing::Color::DarkGray;
			this->Load += gcnew System::EventHandler(this, &AcercaDe::AcercaDe_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void AcercaDe_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
