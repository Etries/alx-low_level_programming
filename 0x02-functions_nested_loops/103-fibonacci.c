#include <stdio.h>

/**
 * main - finds and prints the sum of even numbers in fibonacci series
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	while (1)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}

		if (j >= 4000000)
			break;
		next = j + k;
		j = k;
		k = next;
	}

	printf("%lu\n", sum);

	return (0);
}
