#pragma once
#include <vcclr.h>
#include "Tecnica_Cesar.h"
#include "Tecnica_Vigenere.h"
#include "MensajeExcepcion.h"
#include "MyForm1.h"

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

	protected:





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ tecnicas;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ mensaje;


	private: System::Windows::Forms::Button^ btn_limpiar;
	private: System::Windows::Forms::Button^ btn_aceptar;
	private: System::Windows::Forms::Label^ mensaje_cifrado;
	private: System::Windows::Forms::Button^ btn_descifrar;




	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ clave;
	private: System::Windows::Forms::Label^ mensaje_error;




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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tecnicas = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->mensaje = (gcnew System::Windows::Forms::TextBox());
			this->btn_limpiar = (gcnew System::Windows::Forms::Button());
			this->btn_aceptar = (gcnew System::Windows::Forms::Button());
			this->mensaje_cifrado = (gcnew System::Windows::Forms::Label());
			this->btn_descifrar = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->clave = (gcnew System::Windows::Forms::TextBox());
			this->mensaje_error = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(193, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(330, 37);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Técnicas de encriptación";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(45, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(230, 21);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Elija una técnica de encriptación";
			// 
			// tecnicas
			// 
			this->tecnicas->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tecnicas->FormattingEnabled = true;
			this->tecnicas->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Cifrado de Cesar", L"Cifrado de Vigenere" });
			this->tecnicas->Location = System::Drawing::Point(62, 160);
			this->tecnicas->Name = L"tecnicas";
			this->tecnicas->Size = System::Drawing::Size(196, 29);
			this->tecnicas->TabIndex = 3;
			this->tecnicas->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(427, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 21);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Mensaje a encriptar";
			// 
			// mensaje
			// 
			this->mensaje->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mensaje->Location = System::Drawing::Point(359, 151);
			this->mensaje->Multiline = true;
			this->mensaje->Name = L"mensaje";
			this->mensaje->Size = System::Drawing::Size(282, 54);
			this->mensaje->TabIndex = 5;
			this->mensaje->TextChanged += gcnew System::EventHandler(this, &Form1::mensaje_TextChanged);
			// 
			// btn_limpiar
			// 
			this->btn_limpiar->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_limpiar->Location = System::Drawing::Point(341, 317);
			this->btn_limpiar->Name = L"btn_limpiar";
			this->btn_limpiar->Size = System::Drawing::Size(84, 32);
			this->btn_limpiar->TabIndex = 7;
			this->btn_limpiar->Text = L"Limpiar";
			this->btn_limpiar->UseVisualStyleBackColor = true;
			this->btn_limpiar->Click += gcnew System::EventHandler(this, &Form1::btn_limpiar_Click);
			// 
			// btn_aceptar
			// 
			this->btn_aceptar->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_aceptar->Location = System::Drawing::Point(461, 317);
			this->btn_aceptar->Name = L"btn_aceptar";
			this->btn_aceptar->Size = System::Drawing::Size(74, 32);
			this->btn_aceptar->TabIndex = 8;
			this->btn_aceptar->Text = L"Cifrar";
			this->btn_aceptar->UseVisualStyleBackColor = true;
			this->btn_aceptar->Click += gcnew System::EventHandler(this, &Form1::btn_aceptar_Click);
			// 
			// mensaje_cifrado
			// 
			this->mensaje_cifrado->AutoSize = true;
			this->mensaje_cifrado->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mensaje_cifrado->Location = System::Drawing::Point(355, 252);
			this->mensaje_cifrado->Name = L"mensaje_cifrado";
			this->mensaje_cifrado->Size = System::Drawing::Size(296, 21);
			this->mensaje_cifrado->TabIndex = 9;
			this->mensaje_cifrado->Text = L"EL MENSAJE CIFRADO ESTARA AQUI";
			this->mensaje_cifrado->Click += gcnew System::EventHandler(this, &Form1::mensaje_cifrado_Click);
			// 
			// btn_descifrar
			// 
			this->btn_descifrar->Enabled = false;
			this->btn_descifrar->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_descifrar->Location = System::Drawing::Point(572, 315);
			this->btn_descifrar->Name = L"btn_descifrar";
			this->btn_descifrar->Size = System::Drawing::Size(92, 34);
			this->btn_descifrar->TabIndex = 10;
			this->btn_descifrar->Text = L"Descifrar";
			this->btn_descifrar->UseVisualStyleBackColor = true;
			this->btn_descifrar->Click += gcnew System::EventHandler(this, &Form1::btn_descifrar_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(45, 281);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 21);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Clave (k)";
			// 
			// clave
			// 
			this->clave->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clave->Location = System::Drawing::Point(128, 271);
			this->clave->Multiline = true;
			this->clave->Name = L"clave";
			this->clave->Size = System::Drawing::Size(100, 40);
			this->clave->TabIndex = 12;
			// 
			// mensaje_error
			// 
			this->mensaje_error->AutoSize = true;
			this->mensaje_error->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mensaje_error->ForeColor = System::Drawing::Color::Maroon;
			this->mensaje_error->Location = System::Drawing::Point(67, 375);
			this->mensaje_error->Name = L"mensaje_error";
			this->mensaje_error->Size = System::Drawing::Size(144, 21);
			this->mensaje_error->TabIndex = 13;
			this->mensaje_error->Text = L"Mensaje de error";
			this->mensaje_error->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(710, 447);
			this->Controls->Add(this->mensaje_error);
			this->Controls->Add(this->clave);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btn_descifrar);
			this->Controls->Add(this->mensaje_cifrado);
			this->Controls->Add(this->btn_aceptar);
			this->Controls->Add(this->btn_limpiar);
			this->Controls->Add(this->mensaje);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tecnicas);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Técnicas de encriptación";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void acercaDeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void descargarCódigoFuenteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void btn_aceptar_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		if (this->tecnicas->Text == "Cifrado de Cesar") {

			Tecnica_Cesar tec_Cesar;
			this->tecnicas->Enabled = false;
			this->clave->ReadOnly = true;
			this->btn_descifrar->Enabled = true;
			this->mensaje->Enabled = false;

			bool canClick = true;

			System::String^ mensajeTexbox = this->mensaje->Text;

			pin_ptr<const wchar_t> pinnedMensaje = PtrToStringChars(mensajeTexbox);

			std::wstring wMensaje(pinnedMensaje);

			std::string strMensaje(wMensaje.begin(), wMensaje.end());

			int clave = System::Convert::ToInt32(this->clave->Text);

			if (clave < 0) {
				canClick = false;
			}

			if (canClick) {
				std::string mensajeEncriptado = tec_Cesar.encriptacion_Cesar(strMensaje, clave);

				std::wstring wMensajeEncriptado(mensajeEncriptado.begin(), mensajeEncriptado.end());

				System::String^ mensajeEncriptadoSystem = gcnew System::String(wMensajeEncriptado.c_str());

				this->mensaje_cifrado->Text = mensajeEncriptadoSystem;
			}
			else {
				this->mensaje_error->Text = "La clave debe ser un numero mayor o igual a 0.";
			}
		}

		if (this->tecnicas->Text == "Cifrado de Vigenere") {

			Tecnica_Vigenere tec_Vigenere;

			System::String^ mensajeTexbox = this->mensaje->Text;

			pin_ptr<const wchar_t> pinnedMensaje = PtrToStringChars(mensajeTexbox);

			std::wstring wMensaje(pinnedMensaje);

			std::string strMensaje(wMensaje.begin(), wMensaje.end());


			System::String^ claveTexbox = this->clave->Text;

			pin_ptr<const wchar_t> pinnedClave = PtrToStringChars(claveTexbox);

			std::wstring wClave(pinnedClave);

			std::string strClave(wClave.begin(), wClave.end());


			std::string mensajeEncriptado = tec_Vigenere.encriptacion_Vigenere(strMensaje, strClave);

			std::wstring wMensajeEncriptado(mensajeEncriptado.begin(), mensajeEncriptado.end());

			System::String^ mensajeEncriptadoSystem = gcnew System::String(wMensajeEncriptado.c_str());

			this->mensaje_cifrado->Text = mensajeEncriptadoSystem;
		}

		this->btn_aceptar->Enabled = false;
	}
	catch (MensajeExcepcion^ e) {

		this->mensaje_error->Text = e->What();
	}
	catch (FormatException^ e) {

		this->mensaje_error->Text = "La clave no es válida.";
	}
}
private: System::Void btn_limpiar_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (!this->tecnicas->Enabled) {
		this->tecnicas->Enabled = true;
	}

	if (this->clave->ReadOnly) {
		this->clave->ReadOnly = false;
	}
	
	this->btn_aceptar->Enabled = true;
	this->mensaje->Enabled = true;

	this->tecnicas->Text = "";
	this->mensaje->Text = "";
	this->mensaje_cifrado->Text = "";
	this->mensaje_error->Text = "";
	this->clave->Text = "";
}
private: System::Void btn_descifrar_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		if (this->tecnicas->Text == "Cifrado de Cesar") {

			Tecnica_Cesar tec_Cesar;
			bool canClick = true;

			System::String^ mensajeTexbox = this->mensaje_cifrado->Text;

			pin_ptr<const wchar_t> pinnedMensaje = PtrToStringChars(mensajeTexbox);

			std::wstring wMensaje(pinnedMensaje);

			std::string strMensaje(wMensaje.begin(), wMensaje.end());

			int clave = System::Convert::ToInt32(this->clave->Text);

			if (clave < 0) {
				canClick = false;
			}

			if (canClick) {
				std::string mensajeDesencriptado = tec_Cesar.desencriptacion_Cesar(strMensaje, clave);

				std::wstring wMensajeDesencriptado(mensajeDesencriptado.begin(), mensajeDesencriptado.end());

				System::String^ mensajeDesencriptadoSystem = gcnew System::String(wMensajeDesencriptado.c_str());

				this->mensaje_cifrado->Text = mensajeDesencriptadoSystem;
			}
			else {
				this->mensaje_error->Text = "La clave debe ser un numero mayor o igual a 0.";
			}
		}

		if (this->tecnicas->Text == "Cifrado de Vigenere") {

			Tecnica_Vigenere tec_Vigenere;

			System::String^ mensajeTexbox = this->mensaje_cifrado->Text;

			pin_ptr<const wchar_t> pinnedMensaje = PtrToStringChars(mensajeTexbox);

			std::wstring wMensaje(pinnedMensaje);

			std::string strMensaje(wMensaje.begin(), wMensaje.end());


			System::String^ claveTexbox = this->clave->Text;

			pin_ptr<const wchar_t> pinnedClave = PtrToStringChars(claveTexbox);

			std::wstring wClave(pinnedClave);

			std::string strClave(wClave.begin(), wClave.end());


			std::string mensajeDesencriptado = tec_Vigenere.desencriptacion_Vigenere(strMensaje, strClave);


			std::wstring wMensajeDesencriptado(mensajeDesencriptado.begin(), mensajeDesencriptado.end());

			System::String^ mensajeDesencriptadoSystem = gcnew System::String(wMensajeDesencriptado.c_str());

			this->mensaje_cifrado->Text = mensajeDesencriptadoSystem;
		}

		this->btn_descifrar->Enabled = false;
		this->btn_aceptar->Enabled = true;
	}
	catch (MensajeExcepcion^ e) {

		this->mensaje_error->Text = e->What();
	}
	catch (FormatException^ e) {

		this->mensaje_error->Text = "La clave no es válida.";
	}
}
private: System::Void mensaje_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void mensaje_cifrado_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void acercaDeToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
