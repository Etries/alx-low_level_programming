#include "main.h"

/**
 * more_numbers - print number 1-14 10 times
 *
 * Returns : nothing
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + 48);
			_putchar((j % 10)  + 48);
		}
		_putchar('\n');
	}
}
