#pragma once
#include <string>
class Point2d
{
	float x;
	float y;
public:
	//constructor
	Point2d();
	Point2d(float x, float y);
	Point2d(const Point2d &o);

	//metods
	float distance(Point2d &p2);
	std::string toString();

	//overloded operators
	Point2d operator+(const Point2d & o);
	Point2d& operator=(const Point2d &o);
	bool operator==(const Point2d &o);

	//destuctor
	~Point2d();
	
};

