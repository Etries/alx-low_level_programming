#include <stdio.h>

/**
*main - a function that prints combination of 2 digits
*
*Return: will return (0) (success)
*
*/
int main(void)
{
	int a;
	int b;

	a = 0;
	while (a < 10)
	{
		b = a + 1;
		while (b < 10)
		{
			putchar(a + 48);
			putchar(b + 48);
			if (a < 8 || b < 9)
			{
				putchar(',');
				putchar(' ');
			}
			b++;

		}
		a++;
	}
	putchar('\n');
	return (0);
}
