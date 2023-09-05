#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - concatnates two strings suing mallocs
 * @s1 : first string parameter
 * @s2 : second string parameter
 *
 * Return : retuns a pointer to the concatinated string's pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *str_concat;
	
	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	while (s[j] != '\0')
		j++;
	str_concat = malloc(i + j + 1);
	if (str_concat == NULL)
		return (NULL);
		
	while (*s1 != '\0')
	{
		*str_concat = *s1;
      		s++;
		str_concat++;
	}
	while (*s2 ! = '\0')
	{
		*str_concat = *s2;
		s2++;
		str_concat++;
	}
	*str_concat++ = '\0';
	return (str_concat);
