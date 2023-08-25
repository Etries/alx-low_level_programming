#include "main.h"

/**
*string_toupper - changes all lowercases letters of a string to uppercase
*@str: string to be changed 
*Return: returns a pointer to string char
*/
char *string_toupper(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}

	return (str);
}
