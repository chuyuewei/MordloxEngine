<<<<<<< HEAD
#pragma once

#ifdef ME_PLATFORM_WINDOWS
	#ifdef ME_BUILD_DLL
		#define MORDLOXENGINE_API __declspec(dllexport)
	#else
		#define MORDLOXENGINE_API __declspec(dllimport)
	#endif
#else
	#error MordloxEngine only supports Windows! 
#endif
=======
#pragma once

#ifdef ME_PLATFORM_WINDOWS
	#ifdef ME_BUILD_DLL
		#define MORDLOXENGINE_API __declspec(dllexport)
	#else
		#define MORDLOXENGINE_API __declspec(dllimport)
	#endif
#else
	#error MordloxEngine only supports Windows! 
#endif
>>>>>>> 0af96e88ef10a06fe21de6a49dd3d90709abc66f
