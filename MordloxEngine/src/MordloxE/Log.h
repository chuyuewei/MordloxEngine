#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace MordloxEngine {
	class MORDLOXENGINE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		// �޸�����ʽ���� std::shared_ptr<spdlog::logger>
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// ��ʽʵ����ģ�����޸� C4251 ����
extern template class MORDLOXENGINE_API std::shared_ptr<spdlog::logger>;

//Core log macros
#define ME_CORE_TRACE(...) ::MordloxEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define ME_CORE_INFO(...) ::MordloxEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define ME_CORE_WARN(...) ::MordloxEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define ME_CORE_ERROR(...) ::MordloxEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ME_CORE_FATAL(...) ::MordloxEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client log macros
#define ME_TRACE(...) ::MordloxEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define ME_INFO(...) ::MordloxEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define ME_WARN(...) ::MordloxEngine::Log::GetClinetLogger()->warn(__VA_ARGS__)
#define ME_ERROR(...) ::MordloxEngine::Log::GetClinetLogger()->error(__VA_ARGS__)
#define ME_FATAL(...) ::MordloxEngine::Log::GetClinetLogger()->fatal(__VA_ARGS__)

