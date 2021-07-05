#pragma once
#include <Windows.h>

#ifdef DLL1LIBRARY_EXPORTS
#define DLL1LIBRARY_API __declspec(dllexport)
#else
#define DLL1LIBRARY_API __declspec(dllimport)
#endif

typedef struct Driver {
	LPCWSTR service;
	LPCWSTR device;
	LPCWSTR driver;
} DRIVER, * PDRIVER;


//extern "C" DLL1LIBRARY_API BOOL APIENTRY DllMain(HMODULE hModule,DWORD  ul_reason_for_call,LPVOID lpReserved);
extern "C" DLL1LIBRARY_API void initmain(LPCWSTR service, LPCWSTR device, LPCWSTR driver);

PDRIVER createDriver(LPCWSTR service, LPCWSTR device, LPCWSTR driver);


BOOL load_driver(SC_HANDLE svcHandle);
HANDLE install_driver(PDRIVER driver);
BOOL GetFileNameFromHandle(HANDLE hFile);
const char* GetLastErrorAsString();
