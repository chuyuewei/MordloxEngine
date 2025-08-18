#include <MordloxEngine.h>

class  Sandbox : public MordloxEngine::Application
{
public:
	Sandbox()
	{

	 }

	~Sandbox()
	{

	}
};

MordloxEngine::Application* MordloxEngine::CreateApplication()
{
	return new Sandbox();
}