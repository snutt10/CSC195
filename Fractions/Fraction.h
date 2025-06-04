#pragma once
#include <iostream>
using namespace std;

namespace mathlib {
	class Fraction {
	private:
		int numerator;
		int denominator;
	public:
		Fraction(int num = 0, int denom = 1) : numerator{ num }, denominator{ denom } {}

		void Add(Fraction& frac);
		void Minus(Fraction& point);
		void simplify();


		Fraction operator+(Fraction& frac);

		Fraction operator-(Fraction& other);

		Fraction operator*(Fraction& other);

		Fraction operator/(Fraction& other);

		bool operator==(Fraction& other);

		bool operator!=(Fraction& other);

		bool operator<(Fraction& other);

		bool operator>(Fraction& other);

		bool operator<=(Fraction& other);

		bool operator>=(Fraction& other);

		double toDouble();
		
		friend ostream& operator <<(ostream& ostream, Fraction frac);

		friend istream& operator>>(istream& istream, Fraction& frac);
	};
}