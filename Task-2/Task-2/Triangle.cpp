#include "Triangle.h"
#include <iostream>

using namespace std;

Triangle::Triangle(Point2d point, int rgb[4], float baceIn, float heightIn):
Shape(point, rgb)
{
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

void Triangle::render() {
	cout << "Triangle: " << "\nbase: " << getBase() << "\nheight: " << getHeight() << "\nposetion: " << Shape::getPoint().toString() << endl;
}
Triangle::~Triangle()
{
}
