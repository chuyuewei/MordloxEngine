#pragma once

#ifdef ME_PLATFORM_WINDOWS

extern MordloxEngine::Application* MordloxEngine::CreateApplication();


int main(int argc, char** argv)
{
	MordloxEngine::Log::Init();
	ME_CORE_WARN("Initialized Log!");
	int a = 5;
	MordloxEngine::Log::GetCoreLogger()->info("Hello! This is MordloxEngine!,a");

	auto app = MordloxEngine::CreateApplication();
	app ->Run();
	delete app;
}
#endif