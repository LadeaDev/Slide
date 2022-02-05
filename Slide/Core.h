#pragma once

#ifdef HZ_PLATFORM_WINDOWS
   #ifdef HZ_BUILD_DLL
#define SLIDE_API __declspec(dllexport)
#else
#define SLIDE_API __declspec(dllimport)
#endif

#else
#error only runs on windows!
  
#endif