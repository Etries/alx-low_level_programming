#include <stdio.h>

/**
*main - display all lowercase alphabets in decreasing order z-a
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
	}
	putchar('\n');
	return (0);
}
