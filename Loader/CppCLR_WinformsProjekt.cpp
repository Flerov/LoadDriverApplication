#include "pch.h"
#include "CppCLR_WinformsProjekt.h"
#include "dllmain.h"
#include <Windows.h>

using namespace System;

LPCWSTR _device;
LPCWSTR _service;
LPCWSTR _driver;

#include "Form1.h"

using namespace System::Windows::Forms;


[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	System::Windows::Forms::Form^ app = gcnew CppCLRWinformsProjekt::Form1();
	Application::Run(app); 
	return 0;
}

void callDLL(LPCWSTR servicePtr, LPCWSTR devicePtr, LPCWSTR driverPtr) {
	initmain(servicePtr, devicePtr, driverPtr);
}

