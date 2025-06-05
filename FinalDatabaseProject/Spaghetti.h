#pragma once
#include "Food.h"
class Spaghetti : public Food{
public:
	eType GetType() override { return eType::SPAGHETTI; }

	void Read(ostream& ostream, istream& istream);
	void Write(ostream& ostream);
protected:
	string m_typeOfSauce = "Traditional";
};

