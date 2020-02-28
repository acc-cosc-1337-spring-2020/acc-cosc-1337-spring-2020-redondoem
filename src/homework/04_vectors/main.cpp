#include<iostream>
#include "vectors.h"

using std::cout; using std::cin;

/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	vector<int> nums{ 8,4,20,88,66,99 }; 
	auto ch = 'yes';
	int input;
	do
	{
		cout << "Enter 1 for get maximum of vector or 2 to get primes: ";
		cin >> input;

		if (input == 1) 
		{
			cout << "Maximum in vector with values 8, 4, 20, 88,66,99: " << get_max_from_vector(nums) << "\n";
		
		}
		else if (input == 2)
		{
			int number;
			cout << "Enter a number: ";
			cin >> number;
			cout << "Primes of " << number << "\n";
			vector<int> result = vector_of_primes(number);

			for (auto integers : result)
			{
				cout << integers << " ";
			}
			cout << "\n";
		}
		else
		{
			cout << "incorrect choice, try again \n";
		}

		cout << "Continue? enter yes: \n";
		cin >> ch;

	} while (ch == 'yes' || ch == 'Yes');

	return 0;
}