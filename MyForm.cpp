#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array <String^>^ grid) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	websitecreation1::MyForm form;
	Application::Run(% form);
}
