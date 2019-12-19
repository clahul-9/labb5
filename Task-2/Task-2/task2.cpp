#include "SDL.h"
#include "Triangle.h"
#include "Point2d.h"
#include "Rectangle.h"
#include "Circle.h"
#include <iostream>
#include <stdlib.h> 
#include <vector>



int *getRnd_RGB() {
	int rgb[4];
	for (auto e : rgb) {
		e = rand() % 0 + 254;
	}
	return rgb;
}
Point2d getRnd_point() {
	float x = rand() % 0 + 640;
	float y = rand() % 0 + 480;
	Point2d point(x, y);

	return point;
}

int main(int argc, char* argv[])
{
	float radius = 0;
	float width=0, height=0,base=0;
	std::vector<Shape*> shapes;
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		SDL_Window* window = NULL;
		SDL_Renderer* renderer = NULL;

		if (SDL_CreateWindowAndRenderer(640, 480, 0, &window, &renderer) == 0) {
			SDL_bool done = SDL_FALSE;

			while (!done) {
				SDL_Event event;

				//bakgroun and update window
				SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
				SDL_RenderClear(renderer);
				
				//event
				while (SDL_PollEvent(&event)) {
					if (event.type == SDL_QUIT) {
						done = SDL_TRUE;
					}

					switch (event.key.keysym.sym)
					{
					case SDLK_c:
						radius = rand() % 100;
						shapes.push_back(new Circle(getRnd_point(), getRnd_RGB(), radius));
					case SDLK_k:
						width = rand() % 100, height = rand() % 100;
						shapes.push_back(new Rectangle (getRnd_point(), getRnd_RGB(), width, height));
					case SDLK_t:
						base = rand() % 100, height = rand() % 100;
						shapes.push_back(new Triangle (getRnd_point(), getRnd_RGB(), base, height));
					case SDLK_q:
						done = SDL_TRUE;
					default:
						break;
					}
				}
				for (int i = 0; i < shapes.size(); i++)
				{
					if (shapes.size()!=0)
					{
						shapes[i]->render(renderer);
						SDL_RenderPresent(renderer);
					}
					
				}
				SDL_RenderPresent(renderer);
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

