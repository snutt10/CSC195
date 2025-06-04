#include<iostream>
#define _CRT  DBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
using namespace std;


template<typename T>
class smart_ptr
{
public:
	smart_ptr(T* ptr = nullptr) : _ptr{ ptr } {}
	smart_ptr(const smart_ptr&) = delete;
	smart_ptr& operator = (const smart_ptr&) = delete;

	~smart_ptr() { if (_ptr) delete _ptr; }

	T& operator * () { return *_ptr; }
	T* operator & () { return  _ptr; }
	T* operator -> () { return  _ptr; }

	T* get() { return _ptr; }

private:
	T* _ptr{};
};

int main() {
	int a[] = { 1, 2, 3, 4, 5 };
	int* p = a; //int* p = &a[a];

	cout << p << endl;
	//Pointer arithmetic
	p++;
	p++;
	p--;

	p = p + 2;
	cout << *p << endl;

	int* ptHeap = new int;

	cout << "======================" << endl;
	cout << ptHeap << endl;
	cout << *ptHeap << endl;

	delete ptHeap;

	/*{
		int i;
	}
	i = 5;  cant access the variable outside the scope*/

	/*int i;
	{
		i = 5;
	} if the variable is created outside the scope then changed within it, this is allowed*/

	{
		smart_ptr<int> sp(new int{ 5 });
	}

	_CrtDumpMemoryLeaks();
}