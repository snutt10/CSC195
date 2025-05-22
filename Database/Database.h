#pragma once
#include "Sports.h"
#include <vector>
using namespace std;

class Database{
public:
	~Database(); // Destructor
	void Create(Sports::eType type);
	void DisplayAll();
	void Display(const string& name);
	void Display(Sports::eType type);

private:
	vector<Sports*> m_sports;
};

