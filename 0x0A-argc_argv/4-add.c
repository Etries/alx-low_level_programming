#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - adds two positive integers
 *@argc : number or args
 *@argv : array of args
 *Return: returns o on succes and 1 on error
 */
int main(int argc, char *argv[])
{
	int sum, i, num, j;

	sum  = 0;
	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		j++;
		}
		num = atoi(argv[i]);
		if (num > 0)
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
