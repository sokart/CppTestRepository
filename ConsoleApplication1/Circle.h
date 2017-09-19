#pragma once
#include "Shape.h"
//#include <string>

class Circle :	public Shape
{
	public:
		void operator ++();
		float Radius;
		Circle();
		~Circle();
		std::string GetDescription();
		float GetArea();
		int GetId();
};

