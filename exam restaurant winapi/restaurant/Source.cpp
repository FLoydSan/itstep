#include <windows.h>
#include "resource.h"
#include"header.h"

BOOL close = false;
ENPosition enPositionWinMain = authorization;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInst, LPSTR lpszCmdLine, int nCmdShow)
{
	locale::global(locale(""));
	while (!close)
	{
		switch (enPositionWinMain)
		{
		case authorization:
			DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG_LOGIN), NULL, DlgLogin);
			break;
			//case admin:
			//	DialogBox(hInstance, MAKEINTRESOURCE(IDD_ADMIN_DIALOG), NULL, DlgAdmin);
			//	break;
			//case manager:
			//	DialogBox(hInstance, MAKEINTRESOURCE(IDD_MANAGER_DIALOG), NULL, DlgManager);
			//	break;
			//case waiter:
			//	DialogBox(hInstance, MAKEINTRESOURCE(IDD_WAITER_DIALOG), NULL, DlgWaiter);
			//	break;
		}
	}
}