#include "main.h"
/**
* print_times_table - prints timetable of a give number
*
*@n: the size of the time table
*Return: Nothing
*
*/
void print_times_table(int n)
{
	int i, j, num;

	if (n >= 0 && n <= 15)
	{
	for (i = 0; i <= n ; i++)
	{
	for (j = 0; j <= n; j++)
	{

		num = j * i;
		if (num < 10)
		{
			if (j > 0)
				_putchar(' ');
			_putchar(num + 48);
		}
		else
		{
			_putchar(num / 10 + 48);
			_putchar(num % 10 + 48);
		}
		if (j < n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	}
	}
}
