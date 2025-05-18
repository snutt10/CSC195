// containers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <iterator>
#include <cstdlib>
#include <map>
using namespace std;

void arrays() {
	//ARRAY STRING Section: creating an array, out putting the size and each item in the array
	array<string, 7> arr = { "Monday", "Tuesday", "Wednesday", "Thursday",
	"Friday", "Saturday", "Sunday" };

	cout << "Array size: " << arr.size() << endl;

	for (string str : arr) {
		cout << str << " ";
	}
	cout << endl;
}

void vectors() {
	// VECTORS Section: Create a vector, change the positions of some of the items and delete the last one
	// then output all items after the changes
		vector<int> vecInt = { 3, 6, 1, 39, 47 };
	vecInt.push_back(11);
	vecInt.push_back(21);

	vecInt.pop_back();

	for (int i : vecInt) {
		cout << i << " ";
	}
	cout << endl;
}

void stringList() {
	//LIST STRING Section: Create a list of strings containing fruit names. Change the placement 
	// of 2 and delete a specific element, then after all changes have been made out the full list
	list<string> listStr = { "apples", "oranges", "banannas" };
	listStr.push_front("kiwi");
	listStr.push_back("strawberries");

	listStr.remove("apples");

	list<int>::iterator myItr;
	for (auto i = listStr.cbegin(); i != listStr.cend(); i++) {
		cout << *i << " ";
	}
	cout << endl;
}

void mapString() {
	//MAP STRING Section: Create a map of string and values that stores the number of items 
	// in stock for a few grocery store products. Insert new values then access and update one of the values
	//Print out all of the key-value pairs
	map<string, int> map = { { "apples", 10 }, {"cherries", 12}, {"Oranges", 29} };

	map.insert({ "Watermelon", 15 });
	map.insert({ "pinneaple", 3 });
	map.insert({ "Peaches", 13 });

	cout << map["Watermelon"] << endl;

	map["Watermelon"] = 10;

	for (auto it = map.begin(); it != map.end(); ++it) {
		cout << it->first << " " << it->second << endl;
	}
}

int main() {
	arrays();
	vectors();
	stringList();
	mapString();
}