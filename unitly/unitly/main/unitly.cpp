
#include "stdhy.h"
#include "hywindows.h"
#include "../database/hyDatabase.h"

int WINAPI WinMain(
	HINSTANCE hInstance, //��ǰʵ�����
	HINSTANCE hPrevInstance, // ֮ǰ�ľ��
	LPSTR lpCmdLine, // �������
	int nCmdShow // ��ʾ״̬
	)
{
	DB::HySqliteDB test(string("test.db"));
	bool bSuccess = test.OpenDataBase();
	if (bSuccess)
	{
		test.CloseDataBase();
	}
	
}

