#include "Fraction.h"
#include <numeric>
using namespace std;

void mathlib::Fraction::Add(Fraction& point) {
	denominator += point.denominator;
	numerator += point.numerator;
}


void mathlib::Fraction::Minus(Fraction& point){
	denominator -= point.denominator;
	numerator -= point.numerator;
}

void mathlib::Fraction::simplify() {
	int num = min(numerator, denominator);
	while (num > 1) {
		if (numerator % num == 0 && denominator % num == 0) {
			numerator /= num;
			denominator /= num;
			break;
		}
		num--;
	}
	
	//TODO: Change this method
}

double mathlib::Fraction::toDouble() {
	return static_cast<float>(numerator) / denominator;
}

mathlib::Fraction mathlib::Fraction::operator+(Fraction& frac) {
	Fraction sumPoint;
	sumPoint.numerator = numerator + frac.numerator;
	sumPoint.denominator = denominator + frac.denominator;
	return sumPoint;
}

mathlib::Fraction mathlib::Fraction::operator-(Fraction& frac) {
	return Fraction(numerator - frac.numerator, denominator - frac.denominator);
}

mathlib::Fraction mathlib::Fraction::operator*(Fraction& other) {
	return Fraction(numerator * other.numerator, denominator * other.denominator);
}

mathlib::Fraction mathlib::Fraction::operator/(Fraction& other) {
	if (other.denominator == 0)
		throw std::invalid_argument("Division by zero fraction.");
	return Fraction(numerator * other.denominator, denominator * other.numerator);
}

bool mathlib::Fraction::operator==(Fraction& other) {
	return numerator == other.numerator && denominator == other.denominator;
}

bool mathlib::Fraction::operator!= (Fraction& other) {
	return !(*this == other);
}

bool mathlib::Fraction::operator< (Fraction& other) {
	return numerator * other.denominator < other.numerator * denominator;
	//check to make this works
}

bool mathlib::Fraction::operator> (Fraction& other) {
	return other < *this;
}

bool mathlib::Fraction::operator<= (Fraction& other) {
	return !(*this > other);
}

bool mathlib::Fraction::operator>= (Fraction& other) {
	return !(*this < other);
}

ostream& mathlib::operator<<(ostream& ostream, Fraction frac){
	ostream << frac.numerator << "/" << frac.denominator << endl;
	return ostream;
}

istream& mathlib::operator>>(istream& istream, Fraction& frac){
	char slash;
	istream >> frac.numerator >> slash >> frac.denominator;
	if (slash != '/' || frac.denominator == 0) {
		istream.setstate(ios::failbit);
	}
	return istream;
}
