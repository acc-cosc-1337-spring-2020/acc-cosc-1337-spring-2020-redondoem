#include "vector.h"
#include <iostream>
using std::cout
/*
Initialize nums to size dynamic array
Initialize each array element to 0.

*/

Vector::Vector()
	: size {0}, nums {nullptr}, space{0}
{
}

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
/*
Allocate temporary dynamic array of size v (v1)
Copy v! elements to  temp array
Deallocate old v2 nums array
Pooint v2 nums array to temp array
Set v2 size to v1 size
return a self copy of vector
*/
Vector & Vector::operator=(const Vector & v)
{
	int* temp = new int[v.size];
	
	for (size_t i = 0; i < v.size; ++i)
	{
		temp[i] = v[i];
	}
	delete nums;

	nums = temp;
	size = v.size;

	return *this;
}
/*
Make sure new allocation is greater than space
Create temporary dynamic array of size new allocation
Copy values from old memory array to temporary array
Delete the old memory array
set nums to temporary memory array
set space = new alllocation
*/
void Vector::Reserve(size_t new_allocation)
{
	if (new_allocation <= space)
	{
		return;
	}

	int* temp = new int[new_allocation];
	for (size_t i = 0; i < size; ++i)
	{
		temp[i] = nums[i];

	}
	delete[] nums;

	space = new_allocation;


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