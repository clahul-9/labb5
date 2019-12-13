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
	if (widthIn>0)
	{
		width = widthIn;
	}
	else if (widthIn<0)
	{
		width = (-1 * widthIn);
	}
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

void Rectangle::render() {
	cout << "Rectangle: " << "\nwidth: " << getWidth() << "\nheight: " << getHeight() << "\nposetion: " << Shape::getPoint().toString() << endl;
}
Rectangle::~Rectangle()
{
}
