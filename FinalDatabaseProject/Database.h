#pragma once
#include "Food.h"
#include <vector>
using namespace std;

class Database{
public:
	~Database();
	void Add(Food::eType type);
	void DisplayAll();
	void DisplayInput(const string& protienAmount, const int& priceOfIngrediants);
	void DisplayType(Food::eType type);
	void Load(const std::string& filename);
	void Save(const std::string& filename);
private:
	vector<Food*> m_food;
	Food* Create(Food::eType type);
};

