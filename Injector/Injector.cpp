#include <iostream>
#include <windows.h>

//
//��Ҫͨ�� NuGet ��װ��������չ�� 
// c++ 17
#include <nlohmann/json.hpp>
#include <spdlog/spdlog.h>
//
//
int main()
{
	WinExec("calc.exe",SW_SHOW);
	return 0;
}
