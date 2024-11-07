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
	private: System::Windows::Forms::MenuStrip^ Menu;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ descargarCódigoFuenteToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ descargarCódigoFuenteToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ acercaDeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label7;


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
			this->Menu = (gcnew System::Windows::Forms::MenuStrip());
			this->descargarCódigoFuenteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->descargarCódigoFuenteToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acercaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Menu->SuspendLayout();
			this->SuspendLayout();
			// 
			// Menu
			// 
			this->Menu->BackColor = System::Drawing::Color::CornflowerBlue;
			this->Menu->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->descargarCódigoFuenteToolStripMenuItem,
					this->salirToolStripMenuItem
			});
			this->Menu->Location = System::Drawing::Point(0, 0);
			this->Menu->Name = L"Menu";
			this->Menu->Size = System::Drawing::Size(710, 29);
			this->Menu->TabIndex = 0;
			this->Menu->Text = L"menuStrip1";
			// 
			// descargarCódigoFuenteToolStripMenuItem
			// 
			this->descargarCódigoFuenteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->descargarCódigoFuenteToolStripMenuItem1,
					this->acercaDeToolStripMenuItem
			});
			this->descargarCódigoFuenteToolStripMenuItem->Name = L"descargarCódigoFuenteToolStripMenuItem";
			this->descargarCódigoFuenteToolStripMenuItem->Size = System::Drawing::Size(158, 25);
			this->descargarCódigoFuenteToolStripMenuItem->Text = L"Menú de opciones";
			this->descargarCódigoFuenteToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::descargarCódigoFuenteToolStripMenuItem_Click);
			// 
			// descargarCódigoFuenteToolStripMenuItem1
			// 
			this->descargarCódigoFuenteToolStripMenuItem1->Name = L"descargarCódigoFuenteToolStripMenuItem1";
			this->descargarCódigoFuenteToolStripMenuItem1->Size = System::Drawing::Size(261, 26);
			this->descargarCódigoFuenteToolStripMenuItem1->Text = L"Descargar código fuente";
			// 
			// acercaDeToolStripMenuItem
			// 
			this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
			this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(261, 26);
			this->acercaDeToolStripMenuItem->Text = L"Acerca de";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(53, 25);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(207, 46);
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
			this->label2->Location = System::Drawing::Point(45, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(230, 21);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Elija una técnica de encriptación";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Cifrado de Cesar", L"Cifrado de Vigenere" });
			this->comboBox1->Location = System::Drawing::Point(281, 111);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(196, 29);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(82, 199);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 21);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Mensaje a encriptar";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(244, 187);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(394, 51);
			this->textBox1->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(82, 299);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(146, 21);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Mensaje encriptado";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(427, 245);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 32);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Limpiar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(546, 245);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 32);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Aceptar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(258, 299);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(161, 21);
			this->label5->TabIndex = 9;
			this->label5->Text = L"MENSAJE CIFRADO";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(85, 347);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(143, 34);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Descifrar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(498, 114);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 21);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Clave (k)";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(574, 109);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Maroon;
			this->label7->Location = System::Drawing::Point(277, 153);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(144, 21);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Mensaje de error";
			this->label7->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(710, 447);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Menu);
			this->Name = L"Form1";
			this->Text = L"Técnicas de encriptación";
			this->Menu->ResumeLayout(false);
			this->Menu->PerformLayout();
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
};
}
