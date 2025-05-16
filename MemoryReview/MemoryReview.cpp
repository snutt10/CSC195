#include <iostream>
using namespace std;

struct Person
{
	char name[32];
	int id;
};

// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter (i = i * i)
void Square(int& param) {
	param = param * param;
}

// create a function above main() called Double that takes in an int pointer parameter
// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter (i = i * 2)
// !! make sure to dereference the pointer to set the value and not set the address !!
void Double(int* param) {
	*param = *param * 2;
}

int main()
{
	// ** REFERENCE **
	// 
	// declare an int variable and set the value to some number (less than 10)
	int val = 4;
	// declare a int reference and set it to the int variable above
	int& num = val;
	// output the int variable
	cout << "Int variable w/out changing the reference: " << val << endl;
	// set the int reference to some number
	num = 5;
	// output the int variable
	cout << "Int variable after changing the reference:" << val << endl;
	// what happened to the int variable when the reference was changed? (insert answer)
		// The number changed to the number that the reference variable was reassigned to
	// output the address of the int variable
	cout << "Int variable address: " << &val << endl;
	// output the address of the int reference
	cout << "Int reference address: " << &num << endl;
	// are the addresses the same or different? (insert answer)
		//They are exactly the same everytime

	// call the Square function with the int variable created in the REFERENCE section
	Square(val);
	// output the int variable to the console
	cout << "Int variable after putting it through the square method: " << val << endl;
	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""


	// ** POINTER VARIABLE **
	// 
	// declare an int pointer, set it to nullptr (it points to nothing)
	int* pointer = nullptr;
	// set the int pointer to the address of the int variable created in the REFERENCE section
	pointer = &val;
	// output the value of the pointer
	cout << "Address of the pointer: " << pointer << endl;
	// what is this address that the pointer is pointing to? (insert answer)
		//Its the address of the int variable that was created in the REFERENCE section
	// output the value of the object the pointer is pointing to (dereference the pointer)
	cout << "Value of the pointer: " << *pointer << endl;

	// ** POINTER PARAMETER **
	// call the Double function with the pointer created in the POINTER VARIABLE section
	Double(pointer);
	// output the dereference pointer
	cout << "Value of the pointer after being passed through the double function: " << *pointer << endl;
	// output the int variable created in the REFERENCE section
	cout << "Int variable from reference section: " << val << endl;
	// did the int variable's value change when using the pointer?
		//Yes, it changed to 50. Same as the pointer variable.
}