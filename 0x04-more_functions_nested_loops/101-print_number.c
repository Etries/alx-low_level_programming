#include "main.h"
/**
* print_number - Prints a number
* @n: The number to print
*
*/
void print_number(int n)
{
	unsigned int n2 = n;

	if (n < 0)
	{
		_putchar('-');
		n2 = -n2;
	}
	if (n2 > 9)
	{
	print_number(n / 10);
	}
	_putchar(n % 10 + '0');
	}
