#include "dna.h"
#include <iostream>
#include <string>
//write include statements

//write using statements
using std::cout;
using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	char ch = 'y' || 'Y';

	do
	{
		int dna1;
		cout << "Enter 1 for Get GC content, or 2 for Get DNA Complement: ";
		cin >> dna1;
		if (dna1 == 1)
		{
			std::string dna;
			cout << "Please enter DNA: ";
			cin >> dna;
			double result = get_gc_content(dna);
			cout << "GC content: " << result << "\n";

		}
		else if (dna1 == 2)
		{
			std::string dna;
			cout << "Please enter DNA: ";
			cin >> dna;
			std::string result = get_dna_complement(dna);
			cout << "DNA complement: " << result << "\n" ;
		}
		else if (dna1 != 1 || dna1 != 2)
		{
			cout << "Try again \n";
			cout << "Enter 1 for Get GC content, or 2 for Get DNA Complement: " ;

		}

		cout << "Continue: ";
		cin >> ch;
		
	} while ((ch == 'y') || (ch == 'Y'));
	return 0;

}