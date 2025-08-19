#pragma once

#ifdef ME_PLATFORM_WINDOWS

extern MordloxEngine::Application* MordloxEngine::CreateApplication();


int main(int argc, char** argv)
{
	auto app = MordloxEngine::CreateApplication();
	app ->Run();
	delete app;
}
#endif