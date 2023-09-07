#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - aloocates a memory using malloc
 * @b: amount of memory to be allocated in bytes
 * Return: returns nothing
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}

