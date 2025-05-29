#include <iostream>
#include "Point.h"
using namespace std;

void print(int x) { cout << x << endl; }
void print(float x) { cout << x << endl; }
void print(bool x) { cout << x << endl; }

//bool print(bool x) { cout << x << endl; return true; } Cant differ by return type only
//void print(int& x) { cout << x << endl; } Cant differ by pass by reference or value
//void print(int x) { cout << x * x << endl; } Invalid use of function overload -- cant differ in operation

//void operator + (ost::Point & p1, ost::Point& p2) {
//	p1.x += p2.x;
//	p1.y += p2.y;
//}



int main () {
	cout << "-----------Function Overloads-------------" << endl;
	print(1);
	print(1.0f);
	print(true);

	cout << "-----------Operator Overloads-------------";
	ost::Point point1(10, 14);
	ost::Point point2(5, 8);

	//point1.Add(point2);
	ost::Point point3;
	point3 = point1 + point2;

	ost::Point point4;
	point4 = point3 - point2;

	//point1.Write(cout);
	cout << point1;
	
	//point2.Write(cout);
	cout << point2;
}

/* 
* Function Overloading = a feature in C++ where 2 or more functions can have the same name but different parameters. Can differ
in data thypes or number of parameters
	- changing the return value and passing in a value as reference isnt a valid way of differentiating a method/they are ambiguous
	- If 2 functions do have the same name they are expected to have simlar behaivour

* Operator Overloarding = Allows c++ operators to have user-defined meanings on user defined types(classes). Overload operators are
syntactic sugar for function calls

*/