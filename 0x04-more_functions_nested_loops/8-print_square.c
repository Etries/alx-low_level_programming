#include "main.h"
/**
 * print_sqaure - displays a square followed by a new line.
 *@size : the size of the sqaue to be made
 * Return  : nothing
 *
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j =1; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
