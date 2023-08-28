#include "main.h"

/**
 * _memcpy - copies memory area
 *@dest : destination for copying memory
 *@src : src memory area to be copied
 *@n : number of bytes to be copied
 *Return: return the memory location of dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

