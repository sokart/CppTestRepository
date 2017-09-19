#include "stdafx.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/MyVector.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			MyVector v = MyVector();
			Assert::AreEqual(0, v.VectorId);

		}

		TEST_METHOD(TestMethod2)
		{
			//wchar_t message[200];
			//_swprintf(message, L"This is a fake fail!");

			MyVector v = MyVector(2);
			Assert::AreEqual(2, v.VectorId);
			//Assert::Fail(message, LINE_INFO());
		}

	};
}