#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s : the pointer to memory
 * @b : constant byte
 * @n : the first bytes
 * Return : a pointer to the char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

