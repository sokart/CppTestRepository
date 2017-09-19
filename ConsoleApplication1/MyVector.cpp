#include "stdafx.h"
#include "MyVector.h"


MyVector::MyVector()
{
	printf("Create a new object\n");
	VectorId = 0;
}

MyVector::MyVector(int vectorid)
{
	printf("Create a new object\n");
	VectorId = vectorid;
}

int MyVector::GetVectorId()
{
	return VectorId;
}

MyVector::~MyVector()
{
	printf("Destroy the object\n");
}
