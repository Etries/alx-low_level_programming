#include "main.h"

/**
*flip_bits - gets the number of bits to flip to get from n to m
*@n: given number
*@m: desired number
*
*Return: the number of flipped bits
*/

unsigned isnt flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped_bits = n ^ m;
	int counter = 0;

	while (flipped_bits)
	{
		if (flipped_bits & 1)
			counter++;
		flipped_bits >>= 1;
	}
	return (counter);
}
