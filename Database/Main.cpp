#include <iostream>
#include "Database.h"
#include "Sports.h"
using namespace std;

int main() {
	Database database;

    bool quit = false;
    while (!quit){
        cout << "1 - Create\n2 - Display All\n3 - Display by Name\n4 - Display by Type\n5 - Quit\n";
        int choice;
        cin >> choice;
        int input;

        switch (choice){
        case 1: { // Create object by type break; 
            cout << "Enter Sport to create a team for (0 for tennis, 1 for Hockey): ";
            cin >> input;
            database.Create(static_cast<Sports::eType>(input));
            break;
        }
        case 2: { // DisplayAll(); break; 
            database.DisplayAll();
            break;
        }
        case 3: {// Ask for name, then call database.Display(name) break; 
            cout << "Enter a team name to display info for: ";
            string name;
            cin >> name;
            database.Display(name);
            break;
        }
        case 4: {
            cout << "Enter Sport to Display team for (0 for Tennis, 1 for Hockey): ";
            cin >> input;
            database.Display(static_cast<Sports::eType>(input)); break;
        }
        case 5: {
            quit = true;
            break;
        }
        }
    }
}