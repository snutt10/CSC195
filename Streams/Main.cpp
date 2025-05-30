#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void Write(string text, ostream& ostream) {
	ostream << text << endl;
}

int main() {
	string text = "Hello World\n";
	cout << text;

	//cin >> text; -- Listens for a single word in a sentence
	
	getline(cin, text);
	//cout << text;

	time_t start = time(NULL);
	for (int i = 0; i < 10'000'000; i++) {
		Write(text, cout);
	}
	time_t end = time(NULL);

	cout << "Total time for pass-by-value method call: " << end - start << endl;
	
	//Output to file
	ofstream output("data.txt");
	//output << text;
	Write(text, output);
	output.close();

	text = "";
	//Input from file
	ifstream input("data.txt");
	//input >> text;
	getline(input, text);
	input.close();
	
	cout << "Read from file: " << text << endl;
}