#include "Burgers.h"

void Burgers::Read(ostream& ostream, istream& istream) {
	Food::Read(ostream, istream);

	ostream << "Enter the number of toppings added: ";
	istream >> m_protienGrams;
}

void Burgers::Write(ostream& ostream) {
	Food::Write(ostream);
	ostream << "Number of toppings: " << m_protienGrams << endl;
}
