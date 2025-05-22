#pragma once
#include "Sports.h"
class Hockey : public Sports{
public:
	eType GetType() override { return eType::HOCKEY; }

	void Read(ostream& ostream, istream& istream);
	void Write(ostream& ostream);
protected:
	int m_scoreDifference = 0;
};

