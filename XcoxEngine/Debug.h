#pragma once

#include <iostream>

#include "window.h"

namespace xcox{
	namespace debug{
		class Debug{
		public:
			void getGlVersion()const{ std::cout << "OpenGL Verion: " << glGetString(GL_VERSION) << std::endl; }
		
		};
	}
}