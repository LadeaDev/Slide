#include <Slide.h>

class Sandbox : public Slide::Application {
public:
	Sandbox() {
	};
	~Sandbox() {
	};
};


Slide::Application* Slide::CreateApplication() {
	return new Sandbox();
};