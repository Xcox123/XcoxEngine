#include "Debug.h"
#include "window.h"
#include "maths.h"
int main(){
	xcox::graphics::Window window("Xcox!", 800, 600);
	glClearColor(0.2f, 0.3f, 0.8f, 1.0f);
	
	xcox::debug::Debug m_debugObject;
	m_debugObject.getGlVersion();
	
	
	GLuint vao;
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);

	xcox::maths::vec2 a(1, 2);
	xcox::maths::vec2 b(2, 1);
	xcox::maths::vec3 a3(1, 2, 3);
	xcox::maths::vec3 b3(3, 2, 1);
	xcox::maths::vec4 a4(1, 2, 3, 4);
	xcox::maths::vec4 b4(4, 3, 2, 1);
	std::cout << (a3 != b3) << std::endl;
	std::cout << (a4 / b4) << std::endl;
	while (!window.closed()){
		
		window.clear();
		
#if 0
		glBegin(GL_QUADS);
		glVertex2f(-0.5f, -0.5f);
		glVertex2f(-0.5f, 0.5f);
		glVertex2f(0.5f, 0.5f);
		glVertex2f(0.5f, -0.5f);
		glEnd();
#endif
		glDrawArrays(GL_ARRAY_BUFFER, 0, 6);
		window.update();
		
	}
	
	return 0;
}