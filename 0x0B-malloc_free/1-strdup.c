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
	char duplicate_str;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;
	duplicate_str = malloc(++j * sizeof(char));
	if (duplicate_str == NULL)
		return (NULL);
	while (*str != '\0')
		dupicate_str[i] = str++;

	return (dupicate_str);
}
