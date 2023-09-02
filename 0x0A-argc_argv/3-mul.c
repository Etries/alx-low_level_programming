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
	if (argc != 3)
	{
		printf("Ërror\n");
		return (1);
	}
	int n = atoi(argv[1]);
	int m = atoi(argv[2]);

	printf("%d\n", n * m);
	return (0);
}
