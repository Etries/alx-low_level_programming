#include <stdio.h>

/**
*main - display all cominations of single-digit numbers
*
*Return: will return (0) (success)
*
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
