#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PA_Lab1_Francisco_Morales_1223319::MyForm form;
	Application::Run(%form);
	return 0;
}
