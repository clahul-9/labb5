#pragma once
#include"Point2d.h"
#include"Shape.h"
class Circle:public Shape
{
	float radius;
public:
	Circle(Point2d point,int rgb[4],float radius);
	//radius
	float getRadius();
	void setRadius(float radiusIn);

	void render(SDL_Renderer* object);
	~Circle();
};

