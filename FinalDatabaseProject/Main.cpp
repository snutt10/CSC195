#include <iostream>
#include <fstream>
#include "Database.h"
#include "Food.h"
#include <string>
#define _CRTDBG_MAP_ALLOC 
#include <stdlib.h> 
#include <crtdbg.h>
using namespace std;

int main() {
	Database* db = new Database;

	bool quit = false;
	while (!quit) {
		cout << "1 - Add2 - Display All\n3 - Display by Name\n4 - Display by Type\n5 - Load\n6 - Save\n7 - Quit\n";
		int choice;
		cin >> choice;
		int input;

		switch (choice) {
		case 1: {
		cout: "Enter a food to add info for (0 for Burgers, 1 for Spaghetti): ";
			cin >> input;
			db->Add(static_cast<Food::eType>(input));
			break;
		}
		case 2: {
			db->DisplayAll();
			break;
		}
		case 3: {
			cout << "Enter protien amount in grams and price of ingrediants to find foods that are greater than and less than respectively: ";
			string protien;
			float price;
			cin >> protien;
			cin >> price;
			db->DisplayInput(protien, price);
			break;
		}
		case 4: {
			cout << "Enter food to display all inputted info for (0 for Burgers, 1 for Spaghetti): ";
			cin >> input;
			db->DisplayType(static_cast<Food::eType>(input));
			break;
		}
		case 5: {
			cout << "Enter filename: ";
			string name;
			cin >> name;
			db->Load(name);
		}
		case 6: {
			cout << "Enter filename: ";
			string name;
			cin >> name;
			db->Save(name);
		}
		}
		delete db;
		_CrtDumpMemoryLeaks();
		//string text = "";
		//ofstream fout("data.txt");
		//fout << text;
		//fout.close();

		//// input from file
		//ifstream input("data.txt");
		//input >> text;
		//getline(input, text);
		//// cout << text;
		//input.close();
	}
}