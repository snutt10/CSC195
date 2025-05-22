#include "Sports.h"

void Sports::Read(ostream& ostream, istream& istream) {
	ostream << "Enter a Players Name: ";
	istream >> m_name;

	ostream << "Enter number of players: ";
	istream >> m_players;
}

void Sports::
