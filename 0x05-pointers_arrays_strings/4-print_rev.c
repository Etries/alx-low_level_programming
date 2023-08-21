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
	for (j = i - 1; j >= 0; j--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
