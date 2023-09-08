#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatinates two strings
 * @s1 : string 1 to be concatinated
 * @s2 : string 2 to be concatinated
 * @n : number of chars from s2 to be cont=catinated to s1
 * Return: a cha pointer to a new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, m, p;
	char *str1;

	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	while (s1[i] != '\0')
		i++;
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s2[j] != '\0')
		j++;
	if (n >= j)
		str1 = malloc(sizeof(char) * (i + j + 1));
	else
		str1 = malloc(sizeof(char) * (i + n + 1));
	if (str1  == NULL)
		return (NULL);
	for (m = 0; m < i; m++)
		str1[m] = s1[m];

	if (n >= j)
	{
		for (p = 0; p < j; p++)
			str1[m + p] = s2[p];
	}
	else
	{
		for (p = 0; p < n;  p++)
			str1[m + p] = s2[p];
	}

	str1[m + p] = '\0';
	return (str1);
}
