#include "main.h"

/**
 * print_binary - prints a binary representaion of a number
 * @n: the integere to be converted to binary
 *
 * Return: returns nothing
 */
void print_binary(unsigned long int n)
{
if (n > 1)
	print_binary(n >> 1);

_putchar((n & 1) + '0');
}
