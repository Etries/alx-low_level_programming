#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to of a copied strin
 * @str: string to be copied
 * Return: returns the poinyer tothe new copied string
 */
char *_strdup(char *str)
{
	int i, j;
	char *dup_str;

	if (str == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (str[j] != '\0')
		j++;
	dup_str = malloc(++j * sizeof(char));
	if (dup_str == NULL)
		return (NULL);
	while (*str != '\0')
		dup_str[i] = str++;

	return (dup_str);
}
