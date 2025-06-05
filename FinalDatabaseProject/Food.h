#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Food{
public:
	enum class eType {
		BURGER = 0,
		SPAGHETTI
	};
	string GetProtien() { return m_protienGrams; }
	float GetPrice() { return m_totalPriceOfIngrediants; }
	virtual eType GetType() = 0;

	virtual void Read(ostream& ostream, istream& istream);
	virtual void Write(ostream& ostream);
	virtual void Read(ifstream& ifstream);
	virtual void Write(ofstream& ofstream);

	friend istream& operator >> (std::istream& istream, Food& animal);
	friend ostream& operator << (std::ostream& ostream, Food& animal);

	friend ifstream& operator >> (std::ifstream& istream, Food& animal);
	friend ofstream& operator << (std::ofstream& ostream, Food& animal);
protected:
	string m_protienGrams;
	float m_totalPriceOfIngrediants = 0;
};

