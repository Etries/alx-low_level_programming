#include "main.h"

/**
 * _calloc - allocates memory using malloc
 * @size: size of the memory to be allocated
 * @nmemb: number of elements
 *
 * Return: pointer to the address of the memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	return (NULL);
	block = malloc(nmemb * size);
	if (block != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
		block[i] = 0;
		return (block);
	}
	else
		return (NULL);
}
