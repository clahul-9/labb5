#pragma once
#include "Point2d.h"
class Shape
{
	Point2d point();
	int rgb[4];
public:
	Shape();
	Shape(Point2d point,int rgb[4]);
	virtual void render();
	~Shape();
};

