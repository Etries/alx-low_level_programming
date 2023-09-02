#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed on to it
 * @argc: amount of arguments passed through the program
 * @argv: pointer that contains the arrays of the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = argc - 1;

	printf("%d\n", i);
	return (0);
}
