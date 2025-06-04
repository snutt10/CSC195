#include "Food.h"

void Food::Read(ostream& ostream, istream& istream){
	ostream << "Enter the amount of protien in grams: ";
	istream >> m_protienGrams;

	ostream << "Enter total price of ingredients: ";
	istream >> m_totalPriceOfIngrediants;
}

void Food::Write(ostream& ostream, istream& istream){
	ostream << "Protien amount in grams: " << m_protienGrams << endl;
	ostream << "Price of ingredients: " << m_totalPriceOfIngrediants << endl;
}


