#pragma once
#include "Core.h"

namespace Lizi {
	class LIZI_API Application
	{
	public:
		Application();
		/*virtual虚函数，实现地址晚绑定
		虚析构,多态使用时，如果子类有属性开辟到堆区，那父类指针在释放时无法调用子类的析构代码
		纯虚析构（=0）如果是纯虚析构，该类属于抽象类，无法实例化对象*/
		virtual ~Application();
		void Run();
	};
	//在SandboxApp定义
	Application* CreateApplication();
}
