#include "mian.h"

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
	while (*accept != '\0')
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == *accept)
			{
				i++;
				break;
			}
		}
	accept++;
	}
	return (i);
}
