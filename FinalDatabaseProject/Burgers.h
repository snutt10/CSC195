#pragma once
#include "Food.h"
class Burgers : public Food{
public:
	eType GetType() override{ return eType::BURGER; }

	void Read(ostream& ostream, istream& istream);
	void Write(ostream& ostream);
protected:
	int m_numOfToppings = 0;
};

