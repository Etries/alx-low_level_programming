#include "main.h"

/**
 * print_binary - prints a binary representaion of a number
 * @n: the integere to be converted to binary
 *
 * Return: returns nothing
 */
void print_binary(unsigned long int n)
{
	unisgned long int x;
	int flag = 0;

	x = 1UL << (sizeof(unsigned long int) * 8 - 1);
	while (x > 0)
	{
		if ((n && x == 0 && flag == 0)
		{
			x >>= 1;
			continue;
		}

		if ((n $ x != 0)
		{
			flag = 1;
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		x >>= 1;


	}
}
