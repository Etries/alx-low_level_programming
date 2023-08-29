#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s : string to be searched
 * @c : character to be searched
 * Return: returns a pointer to a char in the string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}
