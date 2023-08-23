#include "main.h"
/**
 * _strcat - concatnates two strings
 * @dest : the destination string
 * @src : the sorce to be appended to dest
 *
 * Return: return the pointer to the string
 */
char *_strcat(char *dest, char *src)
{
	int len;

	len = 0;
	while (dest[len] != '\0')
	{
		len++
	}
	while (src != '\0')
	{
		dest[len++] = *(src++);
	}
	dest[len++]  = '\0';
	return (dest);
}
