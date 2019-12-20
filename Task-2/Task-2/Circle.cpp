#include "Circle.h"
#include <iostream>
#include <math.h>

using namespace std;

Circle::Circle(Point2d point, int rgb[4], float radiusIn):
	Shape (point,rgb)
{
	setRadius(radiusIn);
}

//radius
float Circle::getRadius() { return radius; }
void Circle::setRadius(float radiusIn) {
	if (radiusIn > 0) { radius = radiusIn; }
	else if (radiusIn < 0) { radius = (-1 * radiusIn); }
}

void Circle::render(SDL_Renderer* object) {
	float l = (M_PI * 2 * this->radius)/64;
	float x = Shape::getPoint().getX();
	float y = Shape::getPoint().getY();
	float r = this->radius;
	SDL_SetRenderDrawColor(object, Shape::getRGB()[0], Shape::getRGB()[2], Shape::getRGB()[3], Shape::getRGB()[4]);
	cout << Shape::getRGB()[0], Shape::getRGB()[2], Shape::getRGB()[3], Shape::getRGB()[4];
	for ( double i = 0; i <= 2*M_PI; i+=((2*M_PI)/64.0))
	{
		SDL_RenderDrawLine(object, (r * cos(i))+x , (r * sin(i))+y , (r * cos(i+ ((2 * M_PI) / 64.0)))+x, (r * sin(i+ ((2 * M_PI) / 64.0)))+y );
	}
	quick_exit;
}
Circle::~Circle()
{
}
