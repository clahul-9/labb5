#pragma once
#include"Shape.h"
#include "Point2d.h"
class Rectangle
{
	float width, height;
	Shape shape;
public:
	Rectangle(Point2d point,int rgb[4],float width,float height);
	~Rectangle();
};

