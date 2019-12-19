#include "Triangle.h"
#include <iostream>

using namespace std;

Triangle::Triangle(Point2d point, int rgb[4], float baceIn, float heightIn):
Shape(point, rgb)
{
	cout<< Shape::getRGB()[0]<< Shape::getRGB()[2]<< Shape::getRGB()[3]<< Shape::getRGB()[4]<<endl;

	setBase(baceIn);
	setHeight(heightIn);
}
//base
float Triangle::getBase() { return base; }

void Triangle::setBase(float baseIn) {
	if (baseIn > 0) { base = baseIn; }
	else if (base < 0) { base = (-1 * baseIn); }
}
//heigth
float Triangle::getHeight() { return height; }

void Triangle::setHeight(float heightIn) {
	if (heightIn > 0){height = heightIn;}
	else if (heightIn < 0) { height = (-1 * heightIn); }
}

void Triangle::render(SDL_Renderer* object) {
	float x = Shape::getPoint().getX();
	float y = Shape::getPoint().getY();
	SDL_SetRenderDrawColor(object, Shape::getRGB()[0], Shape::getRGB()[2], Shape::getRGB()[3], Shape::getRGB()[4]);
	SDL_RenderDrawLine(object,x,y ,x+this->base,y );
	SDL_RenderDrawLine(object, x, y, x + (this->base / 2), y - this->height);
	SDL_RenderDrawLine(object, x + (this->base / 2), y - this->height, x + this->base, y);

}
Triangle::~Triangle()
{
}
