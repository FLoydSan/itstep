#include <windows.h>
#include "resource.h"

BOOL CALLBACK DlgProc(HWND, UINT, WPARAM, LPARAM);
BOOL close = false;
HWND hLogin, hExit;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInst, LPSTR lpszCmdLine, int nCmdShow)
{
	return DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG_LOGIN), NULL, DlgProc);
}

BOOL CALLBACK DlgProc(HWND hWnd, UINT message, WPARAM wp, LPARAM lp)
{
	switch (message)
	{
	case WM_CLOSE:
		EndDialog(hWnd, 0);
		return TRUE;
	case WM_INITDIALOG:
		hLogin = GetDlgItem(hWnd, IDC_BUTTON_LOGIN);
		hExit = GetDlgItem(hWnd, IDC_BUTTON_EXIT);
		return true;
	case WM_COMMAND:
		if (LOWORD(wp) == IDC_BUTTON_LOGIN)
		{
			TCHAR strLog[100], strPass[100], temp[100];
			MessageBox(0, TEXT("here should be login check"), TEXT("it works"), MB_OK | MB_ICONINFORMATION);
		}
		else if (LOWORD(wp) == IDC_BUTTON_EXIT){
			EndDialog(hWnd, 0);
			return TRUE;

		}
		return true;
	}
	return FALSE;
}
