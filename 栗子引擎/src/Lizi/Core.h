#pragma once
/* ��ʹ�� __declspec(dllimport)Ҳ����ȷ������룬��ʹ�� __declspec(dllimport)
	ʹ�������������ɸ��õĴ��롣������֮�����ܹ����ɸ��õĴ��룬����Ϊ������ȷ�������Ƿ������ DLL �У�
	��ʹ�ñ��������������������Ѱַ����Ĵ��룬����Щ����ͨ��������ڿ�DLL �߽�ĺ��������С�
	���ǣ�����ʹ�� __declspec(dllimport) ���ܵ��� DLL ��ʹ�õı�����
	//DLL�ڵĹؼ��֣���������DLL�ڲ������뺯���Լ����ݵ���ʱʹ�õ�*/
#ifdef LZ_PLATFORM_WINDOWS//���������windows��ִ��
	#ifdef LZ_BUILD_DLL
		#define LIZI_API __declspec(dllexport)
	#else
		#define LIZI_API __declspec(dllimport)
	#endif
#else
	#error Lizi ֻ֧�� windows
#endif