#include "Point2d.h"
#include <math.h>
#include <string>
#include <stdlib.h>

//constructor's
Point2d::Point2d()
{
	x = 0.0;
	y = 0.0;
}
Point2d::Point2d(float xIn,float yIn)
{
	x = xIn;
	y = yIn;
}
Point2d::Point2d(const Point2d &o) {
	// defining a custom copy constructor
	x = o.x;
	y = o.y;
}
//methods
float Point2d::distance(Point2d &p2) {

	float r =sqrt(abs(x - p2.x)*abs(x - p2.x)+ abs(y - p2.y)*abs(y - p2.y));
	return r;
}
std::string Point2d::toString(){
	std::string r = ("["+std::to_string(x) +","+ std::to_string(y) +"]");
	return r;
}
//overloded opperation
Point2d Point2d::operator+(const Point2d & o) {
	Point2d p;
	p.x = o.x + this->x;
	p.y = o.y + this->y;
	return p;
}
Point2d& Point2d::operator=(const Point2d & o) {
	x = o.x;
	y = o.y;
	return *this;
}
bool Point2d::operator==(const Point2d &o) {
	return (x == o.x && y == o.y);
}

Point2d::~Point2d()
{
}
