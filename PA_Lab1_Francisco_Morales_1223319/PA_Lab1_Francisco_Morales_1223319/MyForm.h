#pragma once
#include "Recursividad.h"

namespace PA_Lab1_Francisco_Morales_1223319 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  fibonacciTbx;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Button^  fib_Btn;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  fib_Lbl;
	private: System::Windows::Forms::Label^  fac_Lbl;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  fac_Btn;

	private: System::Windows::Forms::TextBox^  factorialTbx;
	private: System::Windows::Forms::Label^  bin_Lbl;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  bin_Btn;
	private: System::Windows::Forms::TextBox^  binarioTbx;
	private: System::Windows::Forms::CheckBox^ archivoCheck;
	private: System::Windows::Forms::CheckBox^  archivoCbx;




	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->fibonacciTbx = (gcnew System::Windows::Forms::TextBox());
			this->fib_Btn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->fib_Lbl = (gcnew System::Windows::Forms::Label());
			this->fac_Lbl = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->fac_Btn = (gcnew System::Windows::Forms::Button());
			this->factorialTbx = (gcnew System::Windows::Forms::TextBox());
			this->bin_Lbl = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->bin_Btn = (gcnew System::Windows::Forms::Button());
			this->binarioTbx = (gcnew System::Windows::Forms::TextBox());
			this->archivoCbx = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// fibonacciTbx
			// 
			this->fibonacciTbx->Location = System::Drawing::Point(175, 32);
			this->fibonacciTbx->Name = L"fibonacciTbx";
			this->fibonacciTbx->Size = System::Drawing::Size(100, 20);
			this->fibonacciTbx->TabIndex = 0;
			// 
			// fib_Btn
			// 
			this->fib_Btn->Location = System::Drawing::Point(188, 76);
			this->fib_Btn->Name = L"fib_Btn";
			this->fib_Btn->Size = System::Drawing::Size(75, 23);
			this->fib_Btn->TabIndex = 1;
			this->fib_Btn->Text = L"Fibonacci";
			this->fib_Btn->UseVisualStyleBackColor = true;
			this->fib_Btn->Click += gcnew System::EventHandler(this, &MyForm::fib_Btn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ingrese número/Fibonacci:";
			// 
			// fib_Lbl
			// 
			this->fib_Lbl->AutoSize = true;
			this->fib_Lbl->Location = System::Drawing::Point(322, 35);
			this->fib_Lbl->Name = L"fib_Lbl";
			this->fib_Lbl->Size = System::Drawing::Size(67, 13);
			this->fib_Lbl->TabIndex = 3;
			this->fib_Lbl->Text = L"<Resultado>";
			// 
			// fac_Lbl
			// 
			this->fac_Lbl->AutoSize = true;
			this->fac_Lbl->Location = System::Drawing::Point(322, 134);
			this->fac_Lbl->Name = L"fac_Lbl";
			this->fac_Lbl->Size = System::Drawing::Size(67, 13);
			this->fac_Lbl->TabIndex = 7;
			this->fac_Lbl->Text = L"<Resultado>";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Ingrese número/Factorial:";
			// 
			// fac_Btn
			// 
			this->fac_Btn->Location = System::Drawing::Point(188, 175);
			this->fac_Btn->Name = L"fac_Btn";
			this->fac_Btn->Size = System::Drawing::Size(75, 23);
			this->fac_Btn->TabIndex = 5;
			this->fac_Btn->Text = L"Factorial";
			this->fac_Btn->UseVisualStyleBackColor = true;
			this->fac_Btn->Click += gcnew System::EventHandler(this, &MyForm::fac_Btn_Click);
			// 
			// factorialTbx
			// 
			this->factorialTbx->Location = System::Drawing::Point(175, 131);
			this->factorialTbx->Name = L"factorialTbx";
			this->factorialTbx->Size = System::Drawing::Size(100, 20);
			this->factorialTbx->TabIndex = 4;
			// 
			// bin_Lbl
			// 
			this->bin_Lbl->AutoSize = true;
			this->bin_Lbl->Location = System::Drawing::Point(322, 236);
			this->bin_Lbl->Name = L"bin_Lbl";
			this->bin_Lbl->Size = System::Drawing::Size(67, 13);
			this->bin_Lbl->TabIndex = 11;
			this->bin_Lbl->Text = L"<Resultado>";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(38, 236);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(120, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Ingrese número/Binario:";
			// 
			// bin_Btn
			// 
			this->bin_Btn->Location = System::Drawing::Point(188, 277);
			this->bin_Btn->Name = L"bin_Btn";
			this->bin_Btn->Size = System::Drawing::Size(75, 23);
			this->bin_Btn->TabIndex = 9;
			this->bin_Btn->Text = L"Binario";
			this->bin_Btn->UseVisualStyleBackColor = true;
			this->bin_Btn->Click += gcnew System::EventHandler(this, &MyForm::bin_Btn_Click);
			// 
			// binarioTbx
			// 
			this->binarioTbx->Location = System::Drawing::Point(175, 233);
			this->binarioTbx->Name = L"binarioTbx";
			this->binarioTbx->Size = System::Drawing::Size(100, 20);
			this->binarioTbx->TabIndex = 8;
			// 
			// archivoCbx
			// 
			this->archivoCbx->AutoSize = true;
			this->archivoCbx->Location = System::Drawing::Point(38, 281);
			this->archivoCbx->Name = L"archivoCbx";
			this->archivoCbx->Size = System::Drawing::Size(134, 17);
			this->archivoCbx->TabIndex = 12;
			this->archivoCbx->Text = L"Obtener desde archivo";
			this->archivoCbx->UseVisualStyleBackColor = true;
			this->archivoCbx->CheckedChanged += gcnew System::EventHandler(this, &MyForm::archivoCbx_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(471, 354);
			this->Controls->Add(this->archivoCbx);
			this->Controls->Add(this->bin_Lbl);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->bin_Btn);
			this->Controls->Add(this->binarioTbx);
			this->Controls->Add(this->fac_Lbl);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->fac_Btn);
			this->Controls->Add(this->factorialTbx);
			this->Controls->Add(this->fib_Lbl);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->fib_Btn);
			this->Controls->Add(this->fibonacciTbx);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void fib_Btn_Click(System::Object^  sender, System::EventArgs^  e) {
		//Declaración de Stopwatch
		Stopwatch^ stopWatch = gcnew Stopwatch();
		stopWatch->Start();
		//Ejecución de Fibonacci
		int n = System::Convert::ToInt32(fibonacciTbx->Text);
		Recursividad^ recursividadObj = gcnew Recursividad();
		fib_Lbl->Text = System::Convert::ToString(recursividadObj->Fibonacci(n));
		stopWatch->Stop();
		System::Windows::Forms::MessageBox::Show("Tiempo de ejecución: " + System::Convert::ToString(stopWatch->Elapsed));
		/*//Leer archivo
		StreamReader^ streamReader = gcnew StreamReader("..//Archivos//numeros.csv");
		String^ contenidoArchivo = streamReader->ReadToEnd();
		streamReader->Close();
		//Escribir archivo
		StreamWriter^ streamWriter = gcnew StreamWriter("..//Archivos//resultado.csv");
		streamWriter->WriteLine("Texto por escribir");
		streamWriter->Close();
		*/

	}
	private: System::Void fac_Btn_Click(System::Object^  sender, System::EventArgs^  e) {
		int n = System::Convert::ToInt32(factorialTbx->Text);
		Recursividad^ recursividadObj = gcnew Recursividad();
		fac_Lbl->Text = System::Convert::ToString(recursividadObj->Factorial(n));
	}
	private: System::Void bin_Btn_Click(System::Object^  sender, System::EventArgs^  e) {
		Recursividad^ recursividadObj = gcnew Recursividad();
		if (archivoCbx->Checked) {
			try {
				//Leer archivo
				StreamReader^ streamReader = gcnew StreamReader("..//Entrada.txt");
				String^ contenidoArchivo = streamReader->ReadToEnd();
				streamReader->Close();
				System::Windows::Forms::MessageBox::Show(contenidoArchivo, "Texto obtenido");
				String^ binario = "";
				contenidoArchivo += ";";
				while (contenidoArchivo->IndexOf(";") > 0) {
					binario += recursividadObj->Binario(System::Convert::ToInt32(contenidoArchivo->Substring(0, contenidoArchivo->IndexOf(";")))) + ";";
					contenidoArchivo = contenidoArchivo->Remove(0, contenidoArchivo->IndexOf(";") + 1);
				}
				binario = binario->Remove(binario->Length - 1);
				//Escribir archivo
				StreamWriter^ streamWriter = gcnew StreamWriter("..//Salida.txt");
				streamWriter->WriteLine(binario);
				streamWriter->Close();
				System::Windows::Forms::MessageBox::Show(binario, "Conversión a binario");
				System::Windows::Forms::MessageBox::Show("La conversión fue realizada y guardada exitosamente.");
			} catch (...) {
				System::Windows::Forms::MessageBox::Show("Ocurrió un error durante la conversión. Revisar formato del archivo de entrada");
			}
		}
		else {
			int n = System::Convert::ToInt32(binarioTbx->Text);
			bin_Lbl->Text = recursividadObj->Binario(n);
		}
	}
	private: System::Void archivoCbx_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (archivoCbx->Checked) {
			binarioTbx->Enabled = false;
			binarioTbx->Clear();
		}
		else {
			binarioTbx->Enabled = true;
		}
	}
};
}
