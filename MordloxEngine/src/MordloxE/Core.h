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
