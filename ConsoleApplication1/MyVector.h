#pragma once
class _declspec(dllimport) MyVector
{
	public:
		int VectorId;
		MyVector();
		
		//! Constructor that initializes the vector id of the myVector object.
		/*!
		\param int vectorid : the id of the vector
		\return the new object
		*/
		MyVector(int vectorid);
		int GetVectorId();
		~MyVector();
};

