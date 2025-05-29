#pragma once
#include <iostream>
using namespace std;

namespace ost {
	class Point{
	public:
		float x, y;
	public: 
		//Point() { x = 0; y = 0; } 2-step process
		Point() : x{0}, y{0} {} //Single step process
		Point (float x, float y) : x{x}, y{y} {}
 
		void Write(ostream& ostream);
		void Add(Point& point);
		void Minus(Point& point);

		Point operator + (Point& point);
		Point operator - (Point& point);
		friend ostream& operator << (ostream& ostream, Point& point);
	};

}

