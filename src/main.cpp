#include <Windows.h>
#include "dll_quantum.hpp"
#include <iostream>

int main(void)
{
	// quantumdll 
	// extern "C" _declspec(dllexport) void test(const char* format);
	test("Hello, world!");

	return 0;
}