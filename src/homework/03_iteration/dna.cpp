#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const std::string& dna)
{
	double num = 0.0;
	double gc = 0.0;

	for (auto xx : dna)
	{
		if (xx == 'C' || xx == 'c' || xx == 'G' || xx == 'g')
		{
			num += 1;
		}
	}

	gc = num / dna.size();

	return gc;

}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

std::string get_reverse_string(std::string dna)
{
	std::string reversedna;

	for (auto i = dna.size(); i != 0; --i)
	{
		reversedna.push_back(dna[i-1]);
	}
	
	return reversedna;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

std::string get_dna_complement(std::string dna)
{
	
	std::string complimentary = get_reverse_string(dna);
	for (auto& xx : complimentary)
	{
		if (xx == 'A' || xx == 'a')
		{
			xx = 'T';
		}
		else if (xx == 'T' || xx == 't')
		{
			xx = 'A';
		}

		else if (xx == 'C' || xx == 'c')
		{
			xx = 'G';
		}
		else if (xx == 'G' || xx == 'g')
		{
			xx = 'C';
		}
	}
	return complimentary;
}

