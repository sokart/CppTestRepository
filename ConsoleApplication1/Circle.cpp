#include "stdafx.h"
#include "Circle.h"
//#include <string>

void Circle::operator++()
{
	Radius++;
}

Circle::Circle()
{
	Radius = 0;
	_Id = 1;
}

Circle::~Circle()
{
}

std::string Circle::GetDescription()
{
	return "This is a circle and " + Shape::GetDescription();
}

float Circle::GetArea()
{
	return 3.14 * Radius * Radius;
}

int Circle::GetId()
{
	return _Id;
}
