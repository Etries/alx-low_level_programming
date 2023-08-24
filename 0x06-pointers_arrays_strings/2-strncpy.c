#include "main.h"
/**
 * _strncpy - copies a given string
 * @dest : variable where a string will be copied
 * @src : a string to be copied
 * @n : bytes of src to be copied at most
 * 
 * Return : return a pointer to the string
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i]='\0';
	return (dest);
}
