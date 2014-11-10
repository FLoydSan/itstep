#pragma once
#include <windows.h>
#include <string.h>
#include <tchar.h>
#include <ctime>
#include <stdlib.h>
#include <iostream>
#include<iostream>
#include<istream>
#include<ostream>
#include<fstream>
#include <list>
#include <map>
#include "resource.h"
using namespace std;

BOOL CALLBACK DlgLogin(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

enum ENPosition
{
	authorization = 0,
	admin = 1,
	manager = 2,
	waiter = 3
};
