#ifndef _WINDOW_H_
#define _WINDOW_H_

#include <iostream>

#include <GLFW/glfw3.h>
#include "Cube.h"
#include "Model.h"
#include "Light.h"
#include "shader.h"

#include "SpotLightModel.h"
#include "PointLightModel.h"
#include "DirLightModel.h"

class Window
{
public:
	static int width;
	static int height;
	static glm::mat4 P; // P for projection
	static glm::mat4 V; // V for view
	static void initialize_objects();
	static void clean_up();
	static GLFWwindow* create_window(int width, int height);
	static void resize_callback(GLFWwindow* window, int width, int height);
	static void idle_callback();
	static void display_callback(GLFWwindow*);
	static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
	static void mouse_callback(GLFWwindow* window, double xpos, double ypos);
	static void scroll_callback(GLFWwindow* window, double xoffset, double yoffset);
	static glm::vec3 trackBallMapping(double xpos, double ypos);
};

#endif
