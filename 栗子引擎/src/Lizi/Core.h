#pragma once
/* 不使用 __declspec(dllimport)也能正确编译代码，但使用 __declspec(dllimport)
	使编译器可以生成更好的代码。编译器之所以能够生成更好的代码，是因为它可以确定函数是否存在于 DLL 中，
	这使得编译器可以生成跳过间接寻址级别的代码，而这些代码通常会出现在跨DLL 边界的函数调用中。
	但是，必须使用 __declspec(dllimport) 才能导入 DLL 中使用的变量。
	//DLL内的关键字，导出。将DLL内部的类与函数以及数据导出时使用的*/
#ifdef LZ_PLATFORM_WINDOWS//如果运行在windows上执行
	#ifdef LZ_BUILD_DLL
		#define LIZI_API __declspec(dllexport)
	#else
		#define LIZI_API __declspec(dllimport)
	#endif
#else
	#error Lizi 只支持 windows
#endif