#include "stdhy.h"
#include "hy_windows.h"

BOOL FindProcessName(const wchar_t* ProcessName)
{
	PROCESSENTRY32 stProcess;
	HANDLE			hProcessShot;
#ifdef DEBUG
	wofstream out("test.txt");
#endif
	stProcess.dwSize = sizeof(PROCESSENTRY32);
	hProcessShot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	bool b = false;
	Process32First(hProcessShot, &stProcess);
	do
	{
#ifdef DEBUG
		if (out.is_open())
		{

			out << stProcess.szExeFile << endl;
		}
#endif
		if (lstrcmp(ProcessName, stProcess.szExeFile) == 0)
		{
			return true;
		}
		b = Process32Next(hProcessShot, &stProcess);
	} while (b);
#ifdef DEBUG
	if (out.is_open())
	{
		out.close();
	}
#endif
	return false;
}

void SimulateKeyEvent(_In_ BYTE bVk, _In_ BYTE bScan, _In_ DWORD dwFlags, _In_ ULONG_PTR dwExtraInfo)
{
	keybd_event(bVk, bScan, dwFlags, dwExtraInfo);
}

void SimulateMouseEvent(_In_ DWORD dwFlags, _In_ DWORD dx, _In_ DWORD dy, _In_ DWORD dwData, _In_ ULONG_PTR dwExtraInfo)
{
	mouse_event(dwFlags, dx, dy, dwData, dwExtraInfo);
}
