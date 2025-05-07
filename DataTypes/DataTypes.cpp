#include <iostream>
using namespace std;

int main() {
	string name;
	char initial;
	short age;
	bool isAdult;
	int zipcode;
	float wage;
	short daysWorked;
	float* hoursWorkedPerDay = new float[7]();
	const float TAX = 0.1f; //10% tax rate

	cout << "Enter first name: ";
	cin >> name;
	
	cout << "Enter initial of last name: ";
	cin >> initial;

	cout << "Enter age: ";
	cin >> age;
	isAdult = (age >= 18);

	cout << "Enter Zipcode: ";
	cin >> zipcode;

	cout << "Enter hourly wage: ";
	cin >> wage;
	
	cout << "Enter number of days worked (max 7): ";
	cin >> daysWorked;

	//Collect hours worked per day
	float totalHours = 0;

	for (int i = 0; i < daysWorked; i++){
		cout << "Enter hours worked for the day " << (i + 1) << ": ";
		cin >> hoursWorkedPerDay[i];

		totalHours += hoursWorkedPerDay[i];
	}

	//Calculate payroll
	float grossIncome = totalHours * wage;
	float taxAmount = grossIncome * TAX;
	float netIncome = grossIncome - taxAmount;

	//Display payroll info
	cout << "\nEmployee Payroll Summary\n";
	cout << "-------------------------";
	cout << "Name: " << name << " (Adult: " << (isAdult ? "Yes" : "No") << ")\n";
	cout << "Zipcode: " << zipcode << "\n";
	cout << "Hourly Wage: $" << wage << " per hour\n";
	cout << "Total Hours Worked: " << totalHours << " hours\n";
	cout << "Gross Income: $" << grossIncome << "\n";
	cout << "Tax amount: $" << taxAmount << "\n";
	cout << "Net Income: $" << netIncome << "\n";
}