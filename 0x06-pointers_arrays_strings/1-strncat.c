#include "main.h"
/**
 * _strncat - concatinates two strings
 * @dest : destination string
 * @src : src to be appeneded to dest
 * @n : number of bytes
 *Return:  return the pointer to result
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}
