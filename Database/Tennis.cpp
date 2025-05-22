#include "Tennis.h"

void Tennis::Read(ostream& ostream, istream& istream) {
	Sports::Read(ostream, istream);

	ostream << "Enter Start time of match: ";
	istream >> m_timeMatchStarts;
}

void Tennis::Write(ostream& ostream) {
	Sports::Write(ostream);

	ostream << "Match Start time: " << m_timeMatchStarts << endl;
}
