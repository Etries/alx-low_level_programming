#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n : the number of diagonals to be displayed
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
