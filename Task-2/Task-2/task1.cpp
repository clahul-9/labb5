#include"Circle.h"
#include"Triangle.h"
#include"Rectangle.h"
#include<vector>
#include<iostream>
#include<cstdlib>
#include"Point2d.h"


void testRendering(std::vector<Shape*> shapes) {
	for (int i = 0;i<shapes.size(); i++)
	{
		shapes[i]->render();
	}
}

int main() {
	std::vector<Shape*> shapes;
	int nr = rand() % 10+3;
	for (int i = 0; i < nr ; i++)
	{
		//rgb
		int rgb[4];
		for (int j = 0; j < 3; j++)
		{
			rgb[j] = rand() % 255 + 0;
		}

		//point
		float x = rand() % 100, y = rand() % 100;
		Point2d point(x,y);

		//shape
		int c = rand() % 3 + 0;

		if (c==0)//RECTANGLE
		{
			float width = rand() % 100, height = rand() % 100;
			
			shapes.push_back(new Rectangle (point, rgb, width, height));
		}
		else if (c==1)//Triangle
		{
			float base = rand() % 100, height = rand() % 100;
			shapes.push_back(new Triangle (point, rgb, base, height));
		}
		else if (c==2)//circle
		{
			float radius = rand() % 100;
			shapes.push_back(new Circle (point, rgb, radius));
		}
	}
	testRendering(shapes);

	system("pause");
}

