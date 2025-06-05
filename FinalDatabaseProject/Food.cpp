#include "Food.h"

void Food::Read(ostream& ostream, istream& istream){
	ostream << "Enter the amount of protien in grams: ";
	istream >> m_protienGrams;

	ostream << "Enter total price of ingredients: ";
	istream >> m_totalPriceOfIngrediants;
}

void Food::Write(ostream& ostream){
	ostream << "Protien amount in grams: " << m_protienGrams << endl;
	ostream << "Price of ingredients: " << m_totalPriceOfIngrediants << endl;
}

void Food::Read(ifstream& ifstream){
	ifstream >> m_protienGrams;
}

void Food::Write(ofstream& ofstream){
	ofstream << "Protien amount in grams: " << m_protienGrams << endl;
	ofstream << "Price of ingredients: " << m_totalPriceOfIngrediants << endl;
}

istream& operator>>(istream& istream, Food& animal){
	animal.Read(std::cout, istream);
	return istream;
}

ostream& operator<<(ostream& ostream, Food& animal){
	animal.Write(ostream);
	return ostream;
}

ifstream& operator>>(ifstream& ifstream, Food& animal) {
	animal.Read(ifstream);
	return ifstream;
}

ofstream& operator<<(ofstream& ostream, Food& animal) {
	animal.Write(ostream);
	return ostream;
}
