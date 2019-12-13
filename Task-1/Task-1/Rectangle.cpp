#include "Rectangle.h"
#include "Shape.h"


Rectangle::Rectangle(Point2d point, int rgb[4], float widthIn, float heightIn): 
	Shape (point,rgb)
{
	height = heightIn;
}
//width
float Rectangle::getWidth() { return width; }
void Rectangle::setWidth(float widthIn) {
	if (widthIn>0)
	{
		width = widthIn;
	}
}


Rectangle::~Rectangle()
{
}
