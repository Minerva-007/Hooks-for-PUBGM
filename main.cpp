#include"windows.h"
#include"stdio.h"
#include"conio.h"
int main()
{
	PROCESS_INFORMATION ps;
	STARTUPINFO ss;
	memset(&ss,0,sizeof(ss));
	ss.cb=sizeof(ss);
	int h=CreateProcess("C:/Program Files/AirDroid/AirDroid.exe",0,0,0,0,0,0,"C:/Program Files/AirDroid",&ss,&ps);
	if(h==0){printf("error cant create process");getch();return 0;}
	printf("Ready To Initiate Hook...... Press any key to start or stop hook\n");
	getch();
	
	HMODULE lib=LoadLibrary("MIF.dll");
	typedef void (*P)(HHOOK,HHOOK);
	P func=(P)GetProcAddress(lib,"GetHook");
	FARPROC procaddr=GetProcAddress(lib,"KeyboardProc");
	HANDLE hookkybd=SetWindowsHookEx(WH_KEYBOARD,(HOOKPROC)procaddr,lib,ps.dwThreadId);
	if(hookkybd==0){printf("error cant set hooks");getch();return 0;}
	procaddr=GetProcAddress(lib,"MouseProc");
	HANDLE hookmouse=SetWindowsHookEx(WH_MOUSE,(HOOKPROC)procaddr,lib,ps.dwThreadId);
	(func)(hookkybd,hookmouse);
	printf("Hooks are running. Press any key to remove them\n");
	
	getch();
	UnhookWindowsHookEx(hookkybd);
	UnhookWindowsHookEx(hookmouse);
	FreeLibrary(lib);
	return 0;
}
