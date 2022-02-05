#pragma once
#include "Core.h"
namespace Slide {
	class SLIDE_API Application {
	public:
		Application();
		virtual ~Application();
		void Run();
	};
	Application* CreateApplication();
}