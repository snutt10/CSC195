#include "Database.h"
#include "Tennis.h"
#include "Hockey.h"

using namespace std;

Database::~Database(){
    for (Sports* sp : m_sports) {
        delete sp;
    }
}

void Database::Create(Sports::eType type){
	Sports* sports = nullptr;
    switch (type){
    case Sports::eType::TENNIS:
        sports = new Tennis;
        break;
    case Sports::eType::HOCKEY:
        sports = new Hockey;
        break;
    }
    sports->Read(cout, cin);
    m_sports.push_back(sports);
}

void Database::DisplayAll(){
    for (Sports* sp : m_sports) {
        sp->Write(cout);
    }
}

void Database::Display(const string& name){
    for (Sports* sp : m_sports){
        if (sp->GetName() == name){
            sp->Write(cout);
        }
    }
}

void Database::Display(Sports::eType type){
    for (Sports* sp : m_sports) {
        if (sp->GetType() == type) {
            sp->Write(cout);
        }
    }
}
