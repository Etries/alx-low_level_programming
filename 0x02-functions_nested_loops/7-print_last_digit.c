#include "main.h"
/**
* print_last_digit - finds the last digit by modulus
*
*@n: the number where we find the last digit of
* Return: the last digit
*
*/
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last > 0)
	{
		_putchar(last + 48);
		return (last);
	}
	else
	{
		_putchar(-1 * last + 48);
		return (-1 * last);
	}

}
