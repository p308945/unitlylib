
#include "stdhy.h"
#include "hy_windows.h"


int WINAPI WinMain(
	HINSTANCE hInstance, //��ǰʵ�����
	HINSTANCE hPrevInstance, // ֮ǰ�ľ��
	LPSTR lpCmdLine, // �������
	int nCmdShow // ��ʾ״̬
	)
{
	HDC hdc;
	COLORREF ref;
	hdc = GetDC(NULL);
	ref = GetPixel(hdc,1890,10);
//	if (ref == 0x00ffffff)
	{
		SetCursorPos(1891, 10);
		SimulateMouseEvent(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	}
	ReleaseDC(0,hdc);
}

