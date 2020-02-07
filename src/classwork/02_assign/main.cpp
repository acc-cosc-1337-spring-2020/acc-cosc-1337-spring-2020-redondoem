//Write the include statement for decisions.h here

//Write include for capturing input from keyboard and displaying output to screen


//Write namespace using statements for cout and cin
#include "decision.h"
#include <iostream>

using std::cout;
using std::cin; 


int main() 
{
	//create a double variable named hours
	double hours, hourly_rate;
	cout << "number of hours: ";
	cin >> hours;
	//create a double variable named hourly_rate
	cout << "enter hourly rate: ";
	cin >> hourly_rate; 
	//Prompt user for keyboard input for hours and hourly_rate
	//save the input to variables hours and hourly_rate
	double gross_salary;
	gross_salary = gross_pay(hours, hourly_rate);
	cout << "gross pay is" << gross_salary; 
	//Create a double variable named gross_salary
	//Call the gross_pay function and save its return value to the gross_salary variable

	//Display the gross_salary variable as follows:
	//Example ---->>>     Gross pay: 150.00   

	return 0;
}

