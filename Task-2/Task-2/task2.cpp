#include "SDL.h"
#include "Triangle.h"
#include "Point2d.h"
#include "Rectangle.h"
#include "Circle.h"
#include <iostream>
#include <stdlib.h> 
#include <vector>
#include <array>



int *getRnd_RGB() {
	int *rgb = new int[4];
	for (int i=0; i<=3;i++) {
		*(rgb+i) = rand() % 255+1;
	}
	return rgb;
}
Point2d getRnd_point() {
	float x = rand() % 640+0;
	float y = rand() % 480+0;
	Point2d point(x, y);

	return point;
}

int main(int argc, char* argv[])
{
	float width = 0, height = 0, base = 0, radius = 0;
	int window_width=600, window_height=400;
	std::vector<Shape*> shapes;
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;

	if (SDL_CreateWindowAndRenderer(window_width*2, window_height*2, 0, &window, &renderer) == 0) {
		SDL_bool done = SDL_FALSE;

		while (!done) {
			SDL_Event event;

			//bakgroun and update window
			SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
			SDL_RenderClear(renderer);
			if (shapes.size() > 0)
			{
				for (int i = 0; i < shapes.size(); i++)
				{
					shapes[i]->render(renderer);
				}

			}
			SDL_RenderPresent(renderer);

			//event
			while (SDL_PollEvent(&event)) {
				if (event.type == SDL_QUIT) {
					done = SDL_TRUE;
				}
				if (event.type == SDL_KEYUP)
				{
					switch (event.key.keysym.sym)
					{
					case SDLK_c:
						radius = rand() % window_height+0;
						shapes.push_back(new Circle(getRnd_point(), getRnd_RGB(), radius));
						break;
					case SDLK_k:
						width = rand() % window_width, height = rand() % window_height+0;
						shapes.push_back(new Rectangle(getRnd_point(), getRnd_RGB(), width, height));
						break;
					case SDLK_t:
						base = rand() % window_width, height = rand() % window_height + 0;
						shapes.push_back(new Triangle(getRnd_point(), getRnd_RGB(), base, height));
						break;
					case SDLK_x:
						shapes.clear();
						SDL_RenderClear(renderer);
						break;
					case SDLK_q:
						done = SDL_TRUE;
						break;
					default:
						break;
					}
				}
			}

		}

		//cindaa a destructor
		if (renderer) {
			SDL_DestroyRenderer(renderer);
		}
		if (window) {
			SDL_DestroyWindow(window);
		}
	}
	SDL_Quit();
	return 0;
}

