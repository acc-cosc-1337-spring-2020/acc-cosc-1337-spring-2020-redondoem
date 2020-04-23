#include "vector.h"
#include <iostream>
using std::cout
/*
Initialize nums to size dynamic array
Initialize each array element to 0.

*/

Vector::Vector(size_t sz)
	: size{ sz }, nums{ new int[sz] }
{
	for (size_t i = 0; i < sz; ++i)
	{
		nums[i] = 0;
	}
}
/*
Copy v.size to new class
Create new dynamic memory
intialize array elements to the v.nums array values
*/
Vector::Vector(const Vector & v)
	:size{v.size}, nums{new int[v.size]}
{
	for (size_t i = 0; i < size; ++i)
	{
		nums[i] = v[i];
	}

}
/*release dynamic memory
Deallocate Memory*/
Vector::~Vector()
{
	std::cout << "release memory\n";
	delete[] nums;
}
//free function
void use_vector()
{
	Vector* v1 = new Vector(3);
}