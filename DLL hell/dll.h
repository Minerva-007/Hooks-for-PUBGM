#ifndef _DLL_H_
#define _DLL_H_

#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif
#include <windows.h>
#include "stdio.h"
DLLIMPORT void HelloWorld();
DLLIMPORT LRESULT KeyboardProc(int nCode,WPARAM wparam,LPARAM lparam);
DLLIMPORT LRESULT MouseProc(int nCode,WPARAM wparam,LPARAM lparam);
DLLIMPORT void GetHook(HHOOK hk,HHOOK hm);
#endif
