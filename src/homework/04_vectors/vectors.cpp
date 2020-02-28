#include "vectors.h" /*
Write a value return function get_max_from_vector with a const reference 
vector of intsparameter that returns the max value in a vector

@param numbers is a const reference to a vector of integers
@return the max value in the vector
*/
int get_max_from_vector(vector<int>& numbers)
{
	int maximum = numbers[0];
	
	for (auto more : numbers) 
	{
		if (more > maximum)
		{
			maximum = more; 
		}
	}
	return maximum;
}

bool is_prime(int num)
{
	if (num <= 1)
	{
		return false;
	}

	for (int integer = 2; integer < num; integer++)
	{
		if (num % integer == 0)
		{
			return false; 
		}
	}
	return true; 
}

vector<int> vector_of_primes(int num)
{
	vector<int> primenumbers;
	for (int integer = 0; integer < num; integer++)
	{
		if (is_prime(integer))
		{
			primenumbers.push_back(integer);
		}
	}
	
	return primenumbers;
}


/*
Write a function named is_prime with an integer parameter that
given a number returns true if prime or false if not prime

@param number: Any whole number
@return: bool if prime False if not
*/

/*
Write a a function named vector_of_primes with an integer parameter
that given a number returns all the prime numbers up to the number

Example given number 10 returns a vector with elements 2,3,5,7,

@param int integer value
@return vector of ints containing prime values up to a value

Make sure to use the is_prime function to determine if current 
number is prime.
*/