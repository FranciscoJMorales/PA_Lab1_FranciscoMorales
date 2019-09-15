#pragma once
#include "Recursivo.h"

namespace Tarea1_Francisco_Morales_1223319 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  multiplo1Tbx;
	private: System::Windows::Forms::TextBox^  multiplo2Tbx;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  multiplicacionLbl;
	private: System::Windows::Forms::Button^  multiplicacionBtn;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  palabrasBtn;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  numeroTbx;
	private: System::Windows::Forms::TextBox^  base1Tbx;
	private: System::Windows::Forms::TextBox^  base2Tbx;
	private: System::Windows::Forms::Button^  conversionBtn;
	private: System::Windows::Forms::Label^  conversionLbl;
	private: System::Windows::Forms::Label^  label12;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->multiplo1Tbx = (gcnew System::Windows::Forms::TextBox());
			this->multiplo2Tbx = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->multiplicacionLbl = (gcnew System::Windows::Forms::Label());
			this->multiplicacionBtn = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->palabrasBtn = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->numeroTbx = (gcnew System::Windows::Forms::TextBox());
			this->base1Tbx = (gcnew System::Windows::Forms::TextBox());
			this->base2Tbx = (gcnew System::Windows::Forms::TextBox());
			this->conversionBtn = (gcnew System::Windows::Forms::Button());
			this->conversionLbl = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ejercicio 1:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ejercicio 2:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 206);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ejercicio 3:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(224, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Multiplicación recursiva. Ingrese dos números:";
			// 
			// multiplo1Tbx
			// 
			this->multiplo1Tbx->Location = System::Drawing::Point(15, 47);
			this->multiplo1Tbx->Name = L"multiplo1Tbx";
			this->multiplo1Tbx->Size = System::Drawing::Size(100, 20);
			this->multiplo1Tbx->TabIndex = 4;
			// 
			// multiplo2Tbx
			// 
			this->multiplo2Tbx->Location = System::Drawing::Point(141, 47);
			this->multiplo2Tbx->Name = L"multiplo2Tbx";
			this->multiplo2Tbx->Size = System::Drawing::Size(100, 20);
			this->multiplo2Tbx->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(121, 50);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"X";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(247, 50);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"=";
			// 
			// multiplicacionLbl
			// 
			this->multiplicacionLbl->AutoSize = true;
			this->multiplicacionLbl->Location = System::Drawing::Point(266, 50);
			this->multiplicacionLbl->Name = L"multiplicacionLbl";
			this->multiplicacionLbl->Size = System::Drawing::Size(67, 13);
			this->multiplicacionLbl->TabIndex = 8;
			this->multiplicacionLbl->Text = L"<Resultado>";
			// 
			// multiplicacionBtn
			// 
			this->multiplicacionBtn->Location = System::Drawing::Point(91, 73);
			this->multiplicacionBtn->Name = L"multiplicacionBtn";
			this->multiplicacionBtn->Size = System::Drawing::Size(75, 23);
			this->multiplicacionBtn->TabIndex = 9;
			this->multiplicacionBtn->Text = L"Calcular";
			this->multiplicacionBtn->UseVisualStyleBackColor = true;
			this->multiplicacionBtn->Click += gcnew System::EventHandler(this, &MyForm::multiplicacionBtn_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 149);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(256, 26);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Palabras palíndromas\nLas palabras se obtienen del documento Palabras.txt";
			// 
			// palabrasBtn
			// 
			this->palabrasBtn->Location = System::Drawing::Point(299, 149);
			this->palabrasBtn->Name = L"palabrasBtn";
			this->palabrasBtn->Size = System::Drawing::Size(75, 23);
			this->palabrasBtn->TabIndex = 11;
			this->palabrasBtn->Text = L"Obtener";
			this->palabrasBtn->UseVisualStyleBackColor = true;
			this->palabrasBtn->Click += gcnew System::EventHandler(this, &MyForm::palabrasBtn_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(17, 225);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(152, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Conversión de una base a otra";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(50, 249);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(47, 13);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Número:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(16, 285);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(81, 13);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Base de origen:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(11, 322);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(86, 13);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Base de destino:";
			// 
			// numeroTbx
			// 
			this->numeroTbx->Location = System::Drawing::Point(103, 246);
			this->numeroTbx->Name = L"numeroTbx";
			this->numeroTbx->Size = System::Drawing::Size(100, 20);
			this->numeroTbx->TabIndex = 16;
			// 
			// base1Tbx
			// 
			this->base1Tbx->Location = System::Drawing::Point(103, 282);
			this->base1Tbx->Name = L"base1Tbx";
			this->base1Tbx->Size = System::Drawing::Size(100, 20);
			this->base1Tbx->TabIndex = 17;
			// 
			// base2Tbx
			// 
			this->base2Tbx->Location = System::Drawing::Point(103, 319);
			this->base2Tbx->Name = L"base2Tbx";
			this->base2Tbx->Size = System::Drawing::Size(100, 20);
			this->base2Tbx->TabIndex = 18;
			// 
			// conversionBtn
			// 
			this->conversionBtn->Location = System::Drawing::Point(244, 258);
			this->conversionBtn->Name = L"conversionBtn";
			this->conversionBtn->Size = System::Drawing::Size(75, 23);
			this->conversionBtn->TabIndex = 19;
			this->conversionBtn->Text = L"Calcular";
			this->conversionBtn->UseVisualStyleBackColor = true;
			this->conversionBtn->Click += gcnew System::EventHandler(this, &MyForm::conversionBtn_Click);
			// 
			// conversionLbl
			// 
			this->conversionLbl->AutoSize = true;
			this->conversionLbl->Location = System::Drawing::Point(241, 302);
			this->conversionLbl->Name = L"conversionLbl";
			this->conversionLbl->Size = System::Drawing::Size(67, 13);
			this->conversionLbl->TabIndex = 20;
			this->conversionLbl->Text = L"<Resultado>";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(11, 351);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(464, 13);
			this->label12->TabIndex = 21;
			this->label12->Text = L"*El programa no reconoce las letras, por lo que se pueden dar errores al usar bas"
				L"es mayores a 10";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(486, 393);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->conversionLbl);
			this->Controls->Add(this->conversionBtn);
			this->Controls->Add(this->base2Tbx);
			this->Controls->Add(this->base1Tbx);
			this->Controls->Add(this->numeroTbx);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->palabrasBtn);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->multiplicacionBtn);
			this->Controls->Add(this->multiplicacionLbl);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->multiplo2Tbx);
			this->Controls->Add(this->multiplo1Tbx);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void multiplicacionBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			int n = System::Convert::ToInt32(multiplo1Tbx->Text);
			int m = System::Convert::ToInt32(multiplo2Tbx->Text);
			//Declaración de los dos Stopwatch
			Stopwatch^ stopWatchRecursivo = gcnew Stopwatch();
			Stopwatch^ stopWatchIterativo = gcnew Stopwatch();
			stopWatchIterativo->Start();
			Recursivo^ recursividadObj = gcnew Recursivo();
			int multiplicacion;
			stopWatchIterativo->Start();
			multiplicacion = recursividadObj->MultiplicaciónIterativa(n, m);
			stopWatchIterativo->Stop();
			stopWatchRecursivo->Start();
			multiplicacion = recursividadObj->Multiplicación(n, m);
			stopWatchRecursivo->Stop();
			multiplicacionLbl->Text = System::Convert::ToString(multiplicacion);
			System::Windows::Forms::MessageBox::Show("Tiempo con método iterativo:\n" + System::Convert::ToString(stopWatchIterativo->Elapsed) +
													"\n\nTiempo con método recursivo:\n" + System::Convert::ToString(stopWatchRecursivo->Elapsed));
		}
		catch (...) {
			System::Windows::Forms::MessageBox::Show("Ocurrió un error durante la operación. Revisar que los números se hayan ingresado correctamente.");
		}
	}
	
	private: System::Void palabrasBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			Recursivo^ recursividadObj = gcnew Recursivo();
			//Declaración de los dos Stopwatch
			Stopwatch^ stopWatchRecursivo = gcnew Stopwatch();
			Stopwatch^ stopWatchIterativo = gcnew Stopwatch();
			StreamReader^ streamReader = gcnew StreamReader("..//Palabras.txt");
			String^ contenidoArchivo = streamReader->ReadToEnd();
			streamReader->Close();
			System::Windows::Forms::MessageBox::Show(contenidoArchivo, "Texto obtenido");
			String^ palabras = "";
			int cantidad = 0;
			contenidoArchivo += ";";
			contenidoArchivo = contenidoArchivo->ToLower();
			String^ contenidoCopia = contenidoArchivo;
			stopWatchIterativo->Start();
			while (contenidoArchivo->IndexOf(";") > 0) {
				if (recursividadObj->PalíndromaIterativa(contenidoArchivo->Substring(0, contenidoArchivo->IndexOf(";")))) {
					palabras += "\n" + contenidoArchivo->Substring(0, contenidoArchivo->IndexOf(";"));
					cantidad++;
				}
				contenidoArchivo = contenidoArchivo->Remove(0, contenidoArchivo->IndexOf(";") + 1);
			}
			stopWatchIterativo->Stop();
			palabras = "";
			cantidad = 0;
			contenidoArchivo = contenidoCopia;
			stopWatchRecursivo->Start();
			while (contenidoArchivo->IndexOf(";") > 0) {
				if (recursividadObj->Palíndroma(contenidoArchivo->Substring(0, contenidoArchivo->IndexOf(";")))) {
					palabras += "\n" + contenidoArchivo->Substring(0, contenidoArchivo->IndexOf(";"));
					cantidad++;
				}
				contenidoArchivo = contenidoArchivo->Remove(0, contenidoArchivo->IndexOf(";") + 1);
			}
			stopWatchRecursivo->Stop();
			if (cantidad == 0) {
				palabras = "No se encontraron palabras palíndromas.";
			}
			else if (cantidad == 1) {
				palabras = "Se encontró una palabra palíndroma:" + palabras;
			}
			else {
				palabras = "Se encontraron " + cantidad + " palabras palíndromas:" + palabras;
			}
			System::Windows::Forms::MessageBox::Show(palabras, "Palabras palíndromas");
			System::Windows::Forms::MessageBox::Show("Tiempo con método iterativo:\n" + System::Convert::ToString(stopWatchIterativo->Elapsed) +
													"\n\nTiempo con método recursivo:\n" + System::Convert::ToString(stopWatchRecursivo->Elapsed));
		}
		catch (...) {
			System::Windows::Forms::MessageBox::Show("Ocurrió un error durante la operación. Revisar formato del archivo de entrada");
		}
	}
	private: System::Void conversionBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			int n = System::Convert::ToInt32(numeroTbx->Text);
			int base1 = System::Convert::ToInt32(base1Tbx->Text);
			int base2 = System::Convert::ToInt32(base2Tbx->Text);
			int copiaN = n;
			bool valido = true;
			if (base1 < 2 || base2 < 2) {
				valido = false;
			}
			while (copiaN > 0) {
				if ((copiaN % 10) >= base1) {
					valido = false;
				}
				copiaN /= 10;
			}
			if (valido) {
				Recursivo^ recursividadObj = gcnew Recursivo();
				//Declaración de los dos Stopwatch
				Stopwatch^ stopWatchRecursivo = gcnew Stopwatch();
				Stopwatch^ stopWatchIterativo = gcnew Stopwatch();
				String^ resultado;
				stopWatchIterativo->Start();
				resultado = recursividadObj->ConvertirBaseIterativa(recursividadObj->ConvertirDecimalIterativa(n, base1), base2);
				stopWatchIterativo->Stop();
				stopWatchRecursivo->Start();
				resultado = recursividadObj->ConvertirBase(recursividadObj->ConvertirDecimal(n, base1), base2);
				stopWatchRecursivo->Stop();
				conversionLbl->Text = resultado;
				System::Windows::Forms::MessageBox::Show("Tiempo con método iterativo:\n" + System::Convert::ToString(stopWatchIterativo->Elapsed) +
														"\n\nTiempo con método recursivo:\n" + System::Convert::ToString(stopWatchRecursivo->Elapsed));
			}
			else {
				System::Windows::Forms::MessageBox::Show("Los datos ingresados no son válidos.");
			}
		}
		catch (...) {
			System::Windows::Forms::MessageBox::Show("Ocurrió un error durante la operación. Revisar que los números se hayan ingresado correctamente.");
		}
	}
};
}
