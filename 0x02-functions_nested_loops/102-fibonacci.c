#include <stdio.h>

/**
 * main - displays the first 50 fibonacci serieses
 *
 * Return: Always sucess (0)
 *
 *
 */
int main(void)
{
	int i;
	unsigned long j, k, l;

	l = 0;
	j = 1;
	for (i = 0; i < 50; i++)
	{
		k = l + j;
		if (i == 49)
			printf("%lu", k);
		else
			printf("%lu, ", k);
		l = j;
		j = k;
	}
	putchar('\n');
	return (0);
}
