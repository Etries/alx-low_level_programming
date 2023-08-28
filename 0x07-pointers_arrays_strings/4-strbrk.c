#include "main.h"
#include <stddef.h>
/**
*_strpbrk - The _strpbrk() function locates the first
* occurrence in the string s 
*@s: string where search is made
*@accept: string where searched bytes are located
*Return: returns a pointer to the byte in s that matches
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}

	return (NULL);
}
