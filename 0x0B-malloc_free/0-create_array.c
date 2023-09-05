#include "main.h"

/**
 * create_array - creates an arary of chars that will be init by a specific char
 * @size : size of the array
 * @c : that specific char to initialize the array with
 *
 * Return: a charcter pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *array;

	array = malloc(n * sizeof(char));
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
