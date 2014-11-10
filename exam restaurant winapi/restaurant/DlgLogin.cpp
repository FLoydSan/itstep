#include "Header.h"

HWND hLogin, hExit;

BOOL CALLBACK DlgLogin(HWND hWnd, UINT message, WPARAM wp, LPARAM lp)
{
	switch (message)
	{
	case WM_CLOSE:
	{
					 extern BOOL close;
					 close = true;
					 EndDialog(hWnd, 0);
					 return true;
	}
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
			extern BOOL close;
			close = true;
			EndDialog(hWnd, 0);
			return TRUE;

		}
		return true;
	}
	return FALSE;
}
