#include "sandwhich.h"

void Sandwhich::setPrice(float value) {
	price = value;
}

void Sandwhich::PrintPrice() {
	std::cout << "Price: $" << price << std::endl;
}