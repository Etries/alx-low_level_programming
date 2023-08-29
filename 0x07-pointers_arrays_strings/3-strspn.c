#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s : initial segement
 * @accept : substring
 * Return: returns the length as unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == *s)
			{
				i++;
				break;
			}
		}
	s++;
	}
	return (i);
}
