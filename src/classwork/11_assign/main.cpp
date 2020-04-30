#include "vector.h"
#include<iostream>

int main() 
{
	//lvalue-can reference or has an address that is accessible
	int num = 5; //5 is an rvalue
	int& num_ref = num;// right here accessible
	//rvalue
	int& num_5 = 5;
	int a = 1, b = 5, c; // a*b is an rvalue
	(a*b) = c;


	Vector v1 = get_vector();
	return 0;
}

