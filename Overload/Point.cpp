#include "Point.h"

void ost::Point::Write(ostream& ostream){
	ostream << x << " : " << y << endl;
}

void ost::Point::Add(Point& point){
	x += point.x;   //x = x + point.x <- same thing
	y += point.y;
}

void ost::Point::Minus(Point& point){
	x -= point.x;
	y -= point.y;
}

ost::Point ost::Point::operator+(Point& point){
	Point sumPoint;
	sumPoint.x = x + point.x;
	sumPoint.y = y + point.y;
	return sumPoint;
}

ost::Point ost::Point::operator-(Point& point)
{
	/*Point subPoint;
	subPoint.x = x - point.x;
	subPoint.y = y - point.y;*/
	
	return Point(x - point.x, y - point.y);
}

 ostream& ost::operator<<(ostream& ostream, Point& point)
 {
	 ostream << point.x << " : " << point.y << endl;
	 return ostream;
 }
