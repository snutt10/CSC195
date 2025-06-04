#pragma once
#include <iostream>
using namespace std;

class Food{
public:
	enum class eType {
		BURGER = 0,
		SPAGHETTI
	};
	string GetProtien() { return m_protienGrams; }
	virtual eType GetType() = 0;

	virtual void Read(ostream& ostream, istream& istream);
	virtual void Write(ostream& ostream, istream& istream);

protected:
	string m_protienGrams;
	float m_totalPriceOfIngrediants = 0;
};

