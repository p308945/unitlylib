
#include "stdhy.h"
#include "hywindows.h"
#include "../database/hyDatabase.h"

int WINAPI WinMain(
	HINSTANCE hInstance, //当前实例句柄
	HINSTANCE hPrevInstance, // 之前的句柄
	LPSTR lpCmdLine, // 命令参数
	int nCmdShow // 显示状态
	)
{
	DB::HySqliteDB test(string("test.db"));
	bool bSuccess = test.OpenDataBase();
	if (bSuccess)
	{
		test.CloseDataBase();
	}
	
}

