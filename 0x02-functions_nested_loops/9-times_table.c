#include "main.h"
/**
* times_table - displays a multiplication table for 9
*
* Return: Nothing
*
*/
void times_table(void)
{
	int i, j, num;

	for (i = 0; i <= 9 ; i++)
	{
		for (j = 0; j <= 9; j++)
		{

			num = j * i;
			if (num < 10)
			{
				_putchar('.');
				_putchar(num + 48);
			}
			else
			{
				_putchar(num / 10 + 48);
				_putchar(num % 10 + 48);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar('.');
			}
		}
		_putchar('\n');
	}
}
