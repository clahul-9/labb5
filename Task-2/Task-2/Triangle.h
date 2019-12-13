#pragma once
#include "Point2d.h"
#include "Shape.h"
class Triangle:public Shape
{
	float base, height;
public:
	Triangle(Point2d point, int rgb[4], float base, float height);
	//base
	float getBase();
	void setBase(float baseIn);
	//height
	float getHeight();
	void setHeight(float heightIn);

	void render();
	~Triangle();
};

