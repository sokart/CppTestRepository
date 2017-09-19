#pragma once
#include <string>

class Shape
{
	protected:
		int _Id;
	public:
		Shape();
		~Shape();
		virtual std::string GetDescription();
		virtual float GetArea() = 0;
		virtual int GetId() = 0;
};

