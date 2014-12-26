#ifndef  HY_WINDOWS_H
#define  HY_WINDOWS_H

#include "stdhy.h"
#include <TlHelp32.h>

BOOL FindProcessName(const wchar_t* ProcessName);
BOOL CALLBACK EnumWindowsProc(HWND hwnd, LPARAM lParam);
void SimulateKeyEvent(
	_In_ BYTE bVk,
	_In_ BYTE bScan,
	_In_ DWORD dwFlags,
	_In_ ULONG_PTR dwExtraInfo);
void SimulateMouseEvent(
	_In_ DWORD dwFlags,
	_In_ DWORD dx,
	_In_ DWORD dy,
	_In_ DWORD dwData,
	_In_ ULONG_PTR dwExtraInfo);
#endif // ! HY_WINDOWS_H