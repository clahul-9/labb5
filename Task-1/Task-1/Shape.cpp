#include "Shape.h"



Shape::Shape()
{
}
Shape::Shape(Point2d pointIn, int rgbIn[4]) {
	point() = pointIn;
	for (int i = 0; i < 3; i++)
	{
		if (rgbIn[i]<=255 && rgbIn[i]>=0)
		{
			if (i==3)
			{
				rgb[0] = rgbIn[0];
				rgb[1] = rgbIn[1];
				rgb[2] = rgbIn[2];
			}
		}
		else
		{
			break;
		}
	}
}

void Shape::render() {

}

Shape::~Shape()
{
}
