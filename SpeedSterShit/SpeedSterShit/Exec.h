#include "Cmds.h"
#include <Windows.h>
#include <string>
#include <iostream>
using namespace std;

void InitRunCommandExec()
{
	string GetLinee;
	getline(cin, GetLinee);

	if (GetLinee == "CmdList")
	{
		ShowTutorial();
	}
	else if (GetLinee == "")
	{

	}
}