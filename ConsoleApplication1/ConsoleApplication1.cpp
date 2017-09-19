// ConsoleApplication1.cpp : Defines the entry point for the console application.
// This file contains my first git comments
#include "stdafx.h" 
#include "MyVector.h"
#include "MyVectorTemplate.h"
#include "Shape.h"
#include "Circle.h"
#include <iostream>
#include <string>
#include <ctime>
#include <thread>
#include <list>
#include <cassert>

using namespace std;

struct MyException : public exception 
{
	const char * what() const throw () { return "C++ Exception"; }
};

template <class T>
T Large(T n1, T n2)
{
	return (n1 > n2) ? n1 : n2;
}

template <typename T>
void Swap(T &n1, T &n2)
{
	T temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}

int GetNumber(int a, float b)
{
	cout << "a = " << a << "\n";
	return a;
}

void GetTime()
{
	// current date/time based on current system
	time_t now = time(0);
	tm gmtmres;
	char date[27];
	errno_t error1 = gmtime_s(&gmtmres, &now);
	errno_t error2 = asctime_s(date, &gmtmres);

	cout << "The UTC date and time is: " << now << ", " << date << "----" << endl;
}

void PrintHello(std::string s)
{
	long tid;
	//tid = (long)threadid;
	cout << "Hello World! Thread ID, " << s << endl;
}

void PrintList(list<int> l)
{
	for (auto c : l)
		cout << " " << c;
	cout << endl;
}

template <class T> class is_odd : public std::unary_function<T, bool>
{
public:
	bool operator( ) (T& val)
	{
		return (val % 2) == 1;
	}
};

int main()
{
	std::string s = "Sokratis";
	thread ttest = thread(PrintHello, s);
	ttest.join();

	std::thread t([]()
	{
		std::cout << "thread function\n";
	}
	);
	t.join();

	list<int> mylist;

	mylist.push_back(1);
	PrintList(mylist);
	mylist.push_front(2);
	PrintList(mylist);
	mylist.push_front(4);
	mylist.reverse();
	PrintList(mylist);
	mylist.push_front(3);
	PrintList(mylist);
	mylist.remove(1);
	PrintList(mylist);
	mylist.remove_if(is_odd<int>());
	PrintList(mylist);
	mylist.clear();
	PrintList(mylist);

	assert(mylist.size() == 0);

	Shape *sarray[5];
	printf("Call constructor\n");
	MyVector v = MyVector();

	GetTime();

	int(*function_pointer)(int, float);
	function_pointer = &GetNumber;

	int test = function_pointer(5, 4.23);
	cout << "test = " << test << "\n";

	float fone = 3.2, ftwo = 1.3;
	int ione = 1, itwo = 3;

	int *a;
	int *aaa = new int[10000];

	aaa[0] = 1;
	delete[] aaa;
	
	try { a = new int; }
	catch (std::bad_alloc &exp) 
	{
		try { throw MyException(); }
		catch (MyException &exp) { return -1; }
		return -1;
	}
	
	*a = 3;

	a = NULL;
	delete a;

	Circle *c = new Circle();
	sarray[0] = (Shape *)c;
	
	//Shape s = Shape();
	c->Radius = 4;
	//printf("Circle: %s\n", (c->GetDescription()).c_str());
	printf("Circle: %s\n", (c->GetDescription()).c_str());
	cout << "Circle: " << (c->GetDescription()) << " " << c->GetArea() << " " << c->GetId() << "\n";
	++(*c);
	cout << "New Circle: " << (c->GetDescription()) << " " << c->GetArea() << " " << c->GetId() << "\n";
	//printf("Shape: %s\n", (s.GetDescription()).c_str());

	cout << "Compare floats: " << Large(fone, ftwo) << "\n";
	cout << "Compare int: " << Large(ione, itwo) << "\n";

	cout << "before: " << fone << ", " << ftwo << "\n";
	Swap(fone, ftwo);
	cout << "after: " << fone << ", " << ftwo << "\n";

	MyVectorTemplate<int>  mvt;
	mvt.someOperation(5);

	printf("Wait for input\n");
	getchar();
    return 0;
}

