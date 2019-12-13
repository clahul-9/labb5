#include "Circle.h"
#include <iostream>

using namespace std;

Circle::Circle(Point2d point, int rgb[4], float radiusIn):
	Shape (point,rgb)
{
	setRadius(radiusIn);
}

//radius
float Circle::getRadius() { return radius; }
void Circle::setRadius(float radiusIn) {
	if (radiusIn > 0) { radius = radiusIn; }
	else if (radiusIn < 0) { radius = (-1 * radiusIn); }
}

void Circle::render() {
	cout << "Circle: " << "\nradius: "<<getRadius() << "\nposetion: " << Shape::getPoint().toString() << endl;
}
Circle::~Circle()
{
}
