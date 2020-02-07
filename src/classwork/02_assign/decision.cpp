//Write the function code that returns the product of hours and hourly_rate.

#include "decision.h"

double gross_pay(double hours, double hourly_rate)
{
	double salary; 

	if (hours > 40)
	{
		salary = hours * hourly_rate;
	}
	else 
	{
		salary = hours * hourly_rate;
		double overtime = hours - 40;
		salary = salary + (overtime*hourly_rate*1.5);  

		}
	return salary; 
}


