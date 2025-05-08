// UserDataTypesAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
	int numEmployees;
	std::cout << "Number of employees (max 5): ";
	std::cin >> numEmployees;

	if (numEmployees > 5) numEmployees = 5;

	Employee employees[5];

	for (int i = 0; i < numEmployees; i++){
		std::cout << "\nEnter details for Employee " << (i + 1) << ":\n";
		employees[i].Read();
	}
	return 0;
}