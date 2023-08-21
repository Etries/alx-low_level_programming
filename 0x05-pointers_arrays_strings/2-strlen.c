#include "main.h"
/**
 *_strlen - returns the length of a string
 *@s : the string to be measured
 *
 * Return: the length of the string
 *
 */
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
