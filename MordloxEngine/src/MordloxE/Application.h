<<<<<<< HEAD
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


=======
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


>>>>>>> 0af96e88ef10a06fe21de6a49dd3d90709abc66f
