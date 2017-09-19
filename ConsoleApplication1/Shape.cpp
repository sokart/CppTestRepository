#include "stdafx.h"
#include "Shape.h"
#include <string>

Shape::Shape()
{
	_Id = 0;
	printf("Create shape\n");
}

Shape::~Shape()
{
	printf("Destroy shape\n");
}

std::string Shape::GetDescription()
{
	return "This is a shape";
}

//float Shape::GetArea()
//{
//	return 3.14;
//}
//
//int Shape::GetId()
//{
//	return _Id;
//}