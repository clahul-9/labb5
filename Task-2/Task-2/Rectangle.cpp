#include "Rectangle.h"
#include "Shape.h"
#include<iostream>

using namespace std;

Rectangle::Rectangle(Point2d point, int rgb[4], float widthIn, float heightIn): 
	Shape (point,rgb)
{
	setWidth(widthIn);
	setHeight(heightIn);
}
//width
float Rectangle::getWidth() { return width; }
void Rectangle::setWidth(float widthIn) {
	if (widthIn>0){	width = widthIn;}
	else if (widthIn<0){width = (-1 * widthIn);}
}
//height
float Rectangle::getHeight() { return height; }
void Rectangle::setHeight(float heightIn) {
	if (heightIn > 0)
	{
		height = heightIn;
	}
	else if (heightIn< 0)
	{
		height = (-1 * heightIn);
	}
}

void Rectangle::render(SDL_Renderer* object) {
	float x = Shape::getPoint().getX();
	float y = Shape::getPoint().getY();
	SDL_SetRenderDrawColor(object, Shape::getRGB()[0], Shape::getRGB()[2], Shape::getRGB()[3], Shape::getRGB()[4]);

	SDL_RenderDrawLine(object, x, y, x + this->width, y);
	SDL_RenderDrawLine(object, x, y, x, y+this->height);
	SDL_RenderDrawLine(object, x+this->width, y, x + this->width, y+this->height);
	SDL_RenderDrawLine(object, x + this->width, y+this->height, x , y + this->height);

}
Rectangle::~Rectangle()
{
}
