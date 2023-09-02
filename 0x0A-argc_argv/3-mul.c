#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies twor args
 * @argc : the number of args
 * @argv : array of args
 *
 * Return: success (0) failure (1)
 */
int main(int argc, char *argv[])
{
	int n, m;

	if (argc != 3)
	{
		printf("Ërror\n");
		return (1);
	}
      	n = atoi(argv[1]);
	m = atoi(argv[2]);

	printf("%d\n", n * m);
	return (0);
}
