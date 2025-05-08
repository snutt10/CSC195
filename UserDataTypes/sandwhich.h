#pragma once

#include <iostream>

enum Meat {
	Chicken, Prawns, Pastrami
};

class Sandwhich {
public:
	std::string bread;
	bool isDelicious;
	Meat meat;
private:
	float price;

public:

	void setPrice(float value);

	void PrintPrice();
};