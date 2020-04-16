#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	int r = 0, p = 0; 
	int& ref_r = r;
	
	cout << "Address of r: " << &r;
	cout << "Value of r" << r;
	cout << "Address of ref_r" << &ref_r;

	int* ptr_p = &p;
	cout << "Address of p: " << &p << "\n";
	cout << "Value of p: " << p << "\n";
	cout << "Address of ref_r" << &ptr_p << "\n"; 

	cout << "Contents of ptr_p: " << ptr_p << "\n";
	cout << "Value ptr_p points to: " << *ptr_p;

	*ptr_p = 15;
	cout << "Value ptr_p points to: " << *ptr_p << "\n";
	cout << "Value of p: " << p << "\n";

	int* ptr = 5;

	return 0;
}