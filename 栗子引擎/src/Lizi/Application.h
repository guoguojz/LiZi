#pragma once
#include "Core.h"

namespace Lizi {
	class LIZI_API Application
	{
	public:
		Application();
		/*virtual�麯����ʵ�ֵ�ַ���
		������,��̬ʹ��ʱ��������������Կ��ٵ��������Ǹ���ָ�����ͷ�ʱ�޷������������������
		����������=0������Ǵ����������������ڳ����࣬�޷�ʵ��������*/
		virtual ~Application();
		void Run();
	};
	//��SandboxApp����
	Application* CreateApplication();
}
