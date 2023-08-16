#include <stdio.h>
/**
 * main - prints the first 98 fibonacci series
 *
 * Return: always succes (0);
 *
 */
int main(void)
{
	int i;
	unsigned long int j, k, l;

	i = 0;
	j = 0;
	k = 1;
	l = 0;
	while (i < 98)
	{
		l = j + k;
		printf("%lu", l);
		j = k;
		k = l;
		if (i < 97)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
