#pragma once
#include <iostream>
using namespace std;

class Sports{
public:
	enum class eType {
		TENNIS = 1,
		HOCKEY
	};

	string GetName() { return m_name; }
	virtual eType GetType() = 0;

	virtual void Read(ostream& ostream, istream& istream);
	virtual void Write(ostream& ostream);

protected:
	string m_name;
	int m_players = 0;
};

