#include "Hockey.h"

void Hockey::Read(ostream& ostream, istream& istream){
	Sports::Read(ostream, istream);

	ostream << "Enter score difference: ";
	istream >> m_scoreDifference;
}

void Hockey::Write(ostream& ostream){
	Sports::Write(ostream);

	ostream << "Final score difference: " << m_scoreDifference << endl;
}
