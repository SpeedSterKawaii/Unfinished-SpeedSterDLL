#include "pch.h"
#include <Windows.h>
#include <iostream>
#include <string>
using namespace std;
static bool Commands = true;
static bool LuaCExec = false;

// My unfinished command exploit (FREE TO FINISH but please send back cuz y not)
// Developed by SpeedSterKawaii - Unfinished shit

void initmain()
{
	if (Commands == true)
	{
		cout << "Current Execution Method -> Commands" << "\n";
		cout << "DLL_PROCESS_ATTACH -> NULL/TRUE" << "\n";
		cout << "To execute scripts, disable commands." << "\n";
		cout << "Type 'CmdList' to Get the Command List." << "\n";
	}
	else if (LuaCExec == true)
	{
		cout << "Current Execution Method -> Lua C" << "\n";
		cout << "DLL_PROCESS_ATTACH -> NULL/TRUE" << "\n";
		cout << "To execute commands, disable lua c." << "\n";
	}
	else
	{
		MessageBoxA(0, "Oops, you disabled both methods, please enable one and restart the injection, thank you!", "Enable both methods.", MB_ICONSTOP);
		exit(0);
	}
}

BOOL APIENTRY DllMain(HMODULE Module, DWORD Reason, void* Reserved)
{
	switch (Reason)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(Module);
		CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)initmain, NULL, NULL, NULL);
		break;
	case DLL_PROCESS_DETACH:
		break;
	default: break;
	}
	return TRUE;
}