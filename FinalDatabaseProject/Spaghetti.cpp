#include "Spaghetti.h"

void Spaghetti::Read(ostream& ostream, istream& istream) {
	Food::Read(ostream, istream);

	ostream << "Enter type of sauce (default is traditional): ";
	istream >> m_typeOfSauce;
}

void Spaghetti::Write(ostream& ostream) {
	Food::Write(ostream);

	ostream << "Final score difference: " << m_typeOfSauce << endl;
}
