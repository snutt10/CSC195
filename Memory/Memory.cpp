// Memory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void set(int& i) {
    i = 123;
}

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapper(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int i1 = 10;
    int i2 = 20;

    int& r = i1;
   /* r = 30;

    set(i1);*/

    int* p = nullptr; //Pointers do not have to have a value assigned to them, references do

    cout << "i1: " << i1 << endl;
    cout << "i2: " << i2 << endl;
    cout << "Address i2: " << &i2 << endl;
}

//'&' = References which create a new name for a variable and whatever is changed in that variable also changes the old one. Static
//'*' = Pointers allow for reassignment
