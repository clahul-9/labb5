#include "Shape.h"
#include <iostream>


Shape::Shape()
{
}
Shape::Shape(Point2d pointIn, int rgbIn[4]) {
	setPoint(pointIn);
	setRGB(rgbIn);
}
//point
Point2d Shape::getPoint() { return point; }
void Shape::setPoint(Point2d pointIn) { point = pointIn; }

//rgb+alpha
int* Shape::getRGB() { return rgb; }
void Shape::setRGB(int rgbIn[4]){
	for (int i = 0; i <= 3; ++i)
	{
		//std::cout <<"inann " <<rgbIn[i]<<std::endl;
		if (rgbIn[i] <= 255 && rgbIn[i] > 0)
		{
			//std::cout<<"i "<<rgbIn[i]<<std::endl;

			if (i == 3)
			{
				//std::cout << Shape::getRGB()[0] << Shape::getRGB()[2] << Shape::getRGB()[3] << Shape::getRGB()[4] << std::endl;

				rgb[0] = rgbIn[0];
				rgb[1] = rgbIn[1];
				rgb[2] = rgbIn[2];
				rgb[3] = rgbIn[3];
			}
		}
		else
		{
			break;
		}
	}

}

void Shape::render(SDL_Renderer* object) {
}


Shape::~Shape()
{
}
