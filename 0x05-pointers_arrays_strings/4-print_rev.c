#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s : the string to be reversed
 *
 * Return : nothing
 *
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;
	j = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	for (j = i; j >= 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
