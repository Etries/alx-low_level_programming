#include "main.h"
#include <stddef.h>

/**
 * _realloc - reallocates a memory
 * @ptr: pointer to memory previously allocated 
 * @old_size: sprevious ize of ptr
 * @new_size: size of the new memory
 * Return: pointer to the  new address 
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *block;
	unsigned int i;

	if (ptr == NULL)
	{
		block = malloc(new_size);
		return (block);
	}
	else if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		block = malloc(new_size);
		if (block != NULL)
		{
			for (i = 0; i < min(old_size, new_size); i++)
				*((char *)block + i) = *((char *) ptr + i);
			free(ptr);
			return (block);
		}
		else
			return (NULL);
	}
}
