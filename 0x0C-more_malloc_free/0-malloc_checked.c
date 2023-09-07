#include "main.h"
#include <stdlib>

/**
 * malloc_checked - aloocates a memory using malloc
 * @b: amount of memory to be allocated in bytes
 * Return: returns nothing
 */
void *malloc_checked(unsigned int b)
{

	if (malloc(b) == NULL)
		exit(98);
	return (malloc(b));
}

