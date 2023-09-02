#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the function name
 * @argc: number of args
 * @argv: array of argsì
 *
 * Return: 0
 */

int main(int argc, char *argv[]) __attribute__((unused));
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
