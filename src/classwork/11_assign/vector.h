//
//TODO 7 add template

#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include<cstddef>
#include<stddef.h>

class Vector {
public: 
	Vector(size_t sz);
	Vector(const Vector& v);//copy contructor
	size_t Size()const { return size; }
	int& operator[](int i) { return nums[i]; }
	int& operator[](int i)const { return nums[i]; }

private:
	size_t size;
	int* nums;
};

#endif // !1

//doesn't beling to class
// free function
void use_vector();