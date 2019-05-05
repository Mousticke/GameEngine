#pragma once

#ifdef GE_PLATFORM_WINDOWS

extern GameEngine::Application* GameEngine::CreateApplication();

int main(int argc, char** argv)
{
	int a = 5;
	GameEngine::Log::Init();
	GAMEENGINE_CORE_WARN("Initialise Log");
	GAMEENGINE_INFO("Info Log Var={0}", a);

	auto app = GameEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif // GE_PLATFORM_WINDOWS
