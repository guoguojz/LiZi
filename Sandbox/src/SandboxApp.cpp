#include <Lizi.h>

class Sandbox :public Lizi::Application//ɳ����
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Lizi::Application* Lizi::CreateApplication()
{
	return new Sandbox();
}

