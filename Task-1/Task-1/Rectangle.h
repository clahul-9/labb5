#pragma once
//#include"Shape.h"
//#include "Point2d.h"
class Rectangle :public Shape
{
	float width, height;
	//Shape shape;
public:
	Rectangle(Point2d point,int rgb[4],float width,float height);
	//width
	float getWidth();
	void setWidth(float widthIn);
	//height
	float getHeight();
	void setHeight(float heightIn);
	~Rectangle();
};

