#include <stdio.h>

/**
 *main - adds all numbers that are multiple of 3 and 5
 *
 *Return:  Always success (0)
 *
 */
int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
