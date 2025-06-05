#include "Database.h"
#include "Burgers.h"
#include "Spaghetti.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Database::~Database() {
	for (Food* fo : m_food) {
		delete fo;
	}
}

Food* Database::Create(Food::eType type) {
    Food* food = nullptr;
    switch (type) {
    case Food::eType::BURGER:
        food = new Burgers;
        break;
    case Food::eType::SPAGHETTI:
        food = new Spaghetti;
        break;
    }
    return food;
}

void Database::Add(Food::eType type) {
    Food* food = Create(type);

    food->Read(cout, cin);
    m_food.push_back(food);
    //Write add code
}

void Database::DisplayAll() {
    for (Food* fo : m_food) {
        fo->Write(cout);
    }
}

void Database::DisplayInput(const string& protienAmount, const int& priceOfIngrediants){
    for (Food* fo : m_food) {
        if (fo->GetProtien() >= protienAmount && fo->GetPrice() <= priceOfIngrediants) {
            fo->Write(cout);
        }
    }
}

void Database::DisplayType(Food::eType type){
    for (Food* fo : m_food) {
        if (fo->GetType() == type) {
            fo->Write(cout);
        }
    }
}

void Database::Load(const string& filename){    
    ifstream input(filename);
    if (input.is_open()){
        while (!input.eof()){
            int type;
            input >> type;
            Food* food = Create(static_cast<Food::eType>(type));
            food->Read(input);
            m_food.push_back(food);
        }
    }
}

void Database::Save(const string& filename){
    ofstream output(filename);
    if (output.is_open()){
        for (int i = 0; i < m_food.size(); i++){
            auto type = m_food[i];
            output << type << endl;
            Food* food = Create(dynamic_cast<Food::eType*>(type));
            food->Write(output);
        }
        //<use for loop to iterate through all animals in the container>
            //output << << std::endl;
            //<get animal type and cast to int to write> 
            //<call animal Write with the file output stream>
    }
}