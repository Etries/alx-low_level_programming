#include <stdio.h>

/**
*main - prints all possible  combination os 2 2-digit numbers
*
*Return: will return (0) (success)
*
*/
int main(void)
{
	int i, j, k, l;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = i;
			l = j + 1;
			while (k < 10)
			{
				while (l < 10)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(' ');
					putchar(k + 48);
					putchar(l + 48);
					if (i < 9 || j < 8 || k < 9 || l < 9)
					{
						putchar(',');
						putchar(' ');
					}
					l++;
				}
				k++;
				l = 0;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
