#include "Sports.h"

void Sports::Read(ostream& ostream, istream& istream) {
	ostream << "Enter a Teams Name: ";
	istream >> m_name;

	ostream << "Enter number of players: ";
	istream >> m_players;
}

void Sports::Write(ostream& ostream){
	ostream << "Teams name: " << m_name << endl;
	ostream << "Number of players: " << m_players << endl;
}


