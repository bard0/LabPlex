#pragma once
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	LabPlex::MyForm form;
	Application::Run(%form);
}