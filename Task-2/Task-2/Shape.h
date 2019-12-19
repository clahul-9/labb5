#pragma once
#include "Point2d.h"
#include "SDL.h"
class Shape
{
	Point2d point;
	int rgb[4];
public:
	Shape();
	Shape(Point2d point,int rgb[4]);
	//point
	Point2d getPoint();
	void setPoint(Point2d pointIn);
	//rgb
	int *getRGB();
	void setRGB(int rgb[4]);

	virtual void render(SDL_Renderer* object)=0;
	~Shape();
};

