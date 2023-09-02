#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the arguments it recieved 
 * @argc: amount of arguments passed through the program
 * @argv: arrays of the arguments
 *
 * Return: always success 0
 */
int main(int argc, char *argv[])
{
	int i;
	
	i=0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
