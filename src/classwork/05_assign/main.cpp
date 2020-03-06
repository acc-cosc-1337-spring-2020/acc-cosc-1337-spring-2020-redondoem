#include "rectangle.h"
#include <vector>
#include <iostream>
using std::cout; 
//write include statemetns

/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000
Iterate the vector and display the Area for each Rectangle on one line and the total area for the
3 rectangles.
*/
int main()
{
	std::vector <Rect> rectangle { Rect(4,5), Rect(10,10), Rect(100,10)};
	int total = 0;

	for (auto act : rectangle)
	{

		cout << act << "\n";
		total += act.get_area();
	
	}

	cout << total << "\n";

		return 0;
}