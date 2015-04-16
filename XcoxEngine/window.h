#pragma once

#include <GL\glew.h>
#include <GLFW\glfw3.h>
#include <iostream>

#define MAX_KEYS 1024
#define MAX_BUTTONS 12

namespace xcox{
namespace graphics{
	class Window{
	private:
		int m_width, m_height;
		const char *m_name;
		GLFWwindow *m_window;
		bool init();
		bool m_closed;

		bool m_keys[MAX_KEYS];
		bool m_buttons[MAX_BUTTONS];
		double mx, my;

		
		friend static void key_callback(GLFWwindow *window, int key, int scancode, int action, int mods);
		friend static void button_callback(GLFWwindow *window, int button, int action, int mods);
		friend static void cursor_position_callback(GLFWwindow *window, double xpos, double ypos);
		
	public:
		Window(const char* name, int width, int height);
		~Window();
		void update();
		bool closed()const;
		void clear()const;

		bool isKeyPressed(unsigned int keycode)const;
		bool isButtonPressed(unsigned int button)const;
		void getMousePosition(double& x, double& y)const;
		inline int getWidth()const{ return m_width; }
		inline int getHeight()const{ return m_height; }
	};
}
}