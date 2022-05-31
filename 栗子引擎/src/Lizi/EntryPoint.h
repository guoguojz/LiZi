#pragma once
#ifdef LZ_PLATFORM_WINDOWS//如果运行在windows上执行
extern Lizi::Application* Lizi::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Lizi::CreateApplication();
	app->Run();
	delete app;
}
#endif