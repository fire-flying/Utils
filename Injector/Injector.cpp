#include <iostream>
#include <windows.h>

//
//需要通过 NuGet 安装第三方扩展库 
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
