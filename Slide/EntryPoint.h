#pragma once


#ifdef HZ_PLATFORM_WINDOWS
extern Slide::Application* Slide::CreateApplication();
int main(int argc, char** argv) {
    
    auto app = Slide::CreateApplication();
    app->Run();
    delete app;
 }
#endif 