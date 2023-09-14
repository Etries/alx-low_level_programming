#include <stdio.h>
#include <stdlib.h>
/**
  *main - print opcodes of machine.
  *@argc: arguments counter
  *@argv: argument vector.
  *
  *Return: 0 on success
  */
int main(int argc, char *argv[])
{
	int a, j;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);
	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; ++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i  < j - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
