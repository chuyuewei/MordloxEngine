#pragma once

#include "Core.h"

namespace MordloxEngine
{
	class MORDLOXENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}


