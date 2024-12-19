#include "demo.h"

#include <stdio.h>

//#include "glad/glad.h"
//#include "SDL.h"

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

void Demo::Run()
{
	printf("Initialazing SDL Window");

	////Initialize SDL
	//if (SDL_Init(SDL_INIT_VIDEO) < 0)
	//	printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
	//
	////Create window
	//SDL_Window* window =  SDL_CreateWindow("Nuclei Engine \\o/", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_OPENGL);
	//if (window == nullptr)
	//	printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
	//
	////Set OpenGL version
	//SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 4);
	//SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 6);
	//
	////Create OpenGL context
	//SDL_GLContext glContext = SDL_GL_CreateContext(window);
	//if (glContext == nullptr)
	//	printf("OpenGL context could not be created! SDL_Error: %s\n", SDL_GetError());

	//gladLoadGL();
	//printf("OpenGL Version %s\n", glGetString(GL_VERSION));
}