#pragma once
#ifdef LZ_PLATFORM_WINDOWS//���������windows��ִ��
extern Lizi::Application* Lizi::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Lizi::CreateApplication();
	app->Run();
	delete app;
}
#endif