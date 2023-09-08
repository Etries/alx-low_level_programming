#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _calloc - allocates memory using malloc
 * @size: size of the memory to be allocated
 * @nmemb: number of elements
 *
 * Return: pointer to the address of the memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem != NULL)
	{
	for (i = 0; i < (nmemb * size); i++)
		mem[i] = 0;
	return (mem);
	}
	else
	return (NULL);
}
