#include "main.h"
/**
 * _strcmp - compares teo strings
 * @s1: first string to compared
 * @s2: second string to compared
 * Return: return less/ greater integer n 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
