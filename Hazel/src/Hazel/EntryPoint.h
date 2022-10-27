#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** args) 
{
	printf("Hazel Engine");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;

}

#endif