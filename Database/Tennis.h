#pragma once
#include "Sports.h"
class Tennis : public Sports {
public: 
	eType GetType() override { return eType::TENNIS; }

	void Read(ostream& ostream, istream& istream);
	void Write(ostream& ostream);
protected:
	int m_timeMatchStarts = 0;
};

