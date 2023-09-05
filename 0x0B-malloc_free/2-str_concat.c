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
	int i, j, k;
	char *str_concat;
	
	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	str_concat = malloc(i + j + 1);
	if (str_concat == NULL)
		return (NULL);		
	while (*s1 != '\0' && s1 != NULL)
	{
		str_concat[k++] = *s1;
      		s1++;
	}
	while (*s2 != '\0' && s2 != NULL)
	{
		str_concat[k++] = *s2;
		s2++;
	}
	str_concat[++k] = '\0';
	return (str_concat);
}
