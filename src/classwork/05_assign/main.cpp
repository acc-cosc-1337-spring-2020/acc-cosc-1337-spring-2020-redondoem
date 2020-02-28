#include "rectangle.h"
#include <vector>
#include <iostream>

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
	std::vector<Rect> Rects{ Rect(4,5), Rect(10,10), Rect(100,10)};
	int total = 0;

	for (auto act : Rects)
	{

		cout << act.get_area() << "\n";
		total += act.get_area();
		cout << total << "\n";
	
	}
		return 0;
}