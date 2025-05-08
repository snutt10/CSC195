// UserDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
// #includ is like c++ import

#include <iostream>
#include "sandwhich.h"
//If you change the value to the first one, the default value for the rest of them will also be changed in increasing order


//Structure formatting
//struct Sandwich {
//	std::string bread;
//	float price;
//	bool isDelicious;
//};

int main() {
	//typedef float salary;  --Not a new datatype, salary is an alias
	using salary = float;   // The way above this is the traditional way while the one on this line is the modern one
	salary wage_butcher = 12.5f;
	salary wage_cleaner = 9.8f;
	salary wage_chef = 15.5f;

	Sandwhich bbq;

	bbq.bread = "Honey rye";
	//bbq.price = 25.0f;   --Price is private now, this is still usable when just using structure without a class
	bbq.setPrice(30.0f);
	bbq.isDelicious = true;

	bbq.meat = Meat::Chicken;

	//PrintPrice(bbq); -- Procedural Programming approach
	bbq.PrintPrice();  //OOP approach
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
