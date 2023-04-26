/* Replace "dll.h" with the name of your header */
#include "dll.h"
static int h;
static HHOOK hookkybd,hookmouse;

DLLIMPORT void GetHook(HHOOK hk,HHOOK hm)
{
	hookkybd=hk;
	hookmouse=hm;
}

DLLIMPORT void HelloWorld()
{
	MessageBox(0,"Hello World from DLL!\n","Hi",MB_ICONINFORMATION);
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL,DWORD fdwReason,LPVOID lpvReserved)
{
	h=hinstDLL;
	/* Return TRUE on success, FALSE on failure */
	return TRUE;
}

DLLIMPORT LRESULT KeyboardProc(int nCode,WPARAM wparam,LPARAM lparam)
{
	POINT p1;
	if(nCode<0)
	{
		return CallNextHookEx(hookkybd,nCode,wparam,lparam);
	}
	
	if(nCode==HC_ACTION)
	{
			switch(wparam)
			{
			case 0x57:
				//W pressed
				//mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				GetCursorPos(&p1);
				SetCursorPos(267,633);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTDOWN,123,456,0,12345678);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				SetCursorPos(p1.x,p1.y);
				break;
				
			case 0x41:
				//A pressed
				//mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				GetCursorPos(&p1);
				SetCursorPos(195,708);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTDOWN,123,456,0,12345678);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				SetCursorPos(p1.x,p1.y);
				break;
					
			case 0x53:
				//S pressed
				//mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				GetCursorPos(&p1);
				SetCursorPos(265,770);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTDOWN,123,456,0,12345678);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				SetCursorPos(p1.x,p1.y);
				break;
				
			case 0x44:
				//D pressed
				//mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				GetCursorPos(&p1);
				SetCursorPos(334,698);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTDOWN,123,456,0,12345678);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				SetCursorPos(p1.x,p1.y);
				break;
				
			case 0x52:
				//R pressed
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				GetCursorPos(&p1);
				SetCursorPos(1021,810);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTDOWN,123,456,0,12345678);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				SetCursorPos(p1.x,p1.y);
				break;
				
			case 0x20:
				//Spacebar pressed
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				GetCursorPos(&p1);
				SetCursorPos(1204,711);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTDOWN,123,456,0,12345678);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				SetCursorPos(p1.x,p1.y);
				break;
				
			case 0x11:
				//ctrl pressed
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				GetCursorPos(&p1);
				SetCursorPos(1201,790);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTDOWN,123,456,0,12345678);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				SetCursorPos(p1.x,p1.y);
				break;
			
			case 0x12:
				//alt pressed
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				GetCursorPos(&p1);
				SetCursorPos(1122,844);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTDOWN,123,456,0,12345678);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				SetCursorPos(p1.x,p1.y);
				break;
				
			case 0x31:
				//1 pressed
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				GetCursorPos(&p1);
				SetCursorPos(603,813);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTDOWN,123,456,0,12345678);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				SetCursorPos(p1.x,p1.y);
				break;
				
			case 0x32:
				//2 pressed
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				GetCursorPos(&p1);
				SetCursorPos(774,816);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTDOWN,123,456,0,12345678);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				SetCursorPos(p1.x,p1.y);
				break;
				
			case 0x51:
				//Q pressed
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				GetCursorPos(&p1);
				SetCursorPos(234,436);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTDOWN,123,456,0,12345678);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				SetCursorPos(p1.x,p1.y);
				break;
				
			case 0x45:
				//E pressed
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				GetCursorPos(&p1);
				SetCursorPos(335,434);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTDOWN,123,456,0,12345678);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				SetCursorPos(p1.x,p1.y);
				break;
				
			case 0x10:
				//shift pressed
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				GetCursorPos(&p1);
				SetCursorPos(1135,354);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTDOWN,123,456,0,12345678);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				SetCursorPos(p1.x,p1.y);
				break;
					
			case 0x0D:
				//Enter pressed
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				GetCursorPos(&p1);
				SetCursorPos(935,559);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTDOWN,123,456,0,12345678);
				mouse_event(MOUSEEVENTF_ABSOLUTE+MOUSEEVENTF_LEFTUP,123,456,0,12345678);
				SetCursorPos(p1.x,p1.y);
				break;
			}
		return 1;
	}
	return CallNextHookEx(hookkybd,nCode,wparam,lparam);// Bypass the original message
}

DLLIMPORT LRESULT MouseProc(int nCode,WPARAM wparam,LPARAM lparam)
{
	MOUSEHOOKSTRUCT *m=(PMOUSEHOOKSTRUCT)lparam;
	if(m->dwExtraInfo==12345678)
	return CallNextHookEx(hookmouse,nCode,wparam,lparam);
	
	
}

