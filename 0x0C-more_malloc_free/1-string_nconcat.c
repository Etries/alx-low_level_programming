#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatinates two strings
 * @s1 : string 1 to be concatinated
 * @s2 : string 2 to be concatinated
 * @n : number of chars from s2 to be cont=catinated to s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, m, p;
	char *str;
	
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
	printf("n = %d i= %d, j-%d, s1=%s, and %s is s2",n, i ,j, s1, s2); 
	if (n >= j)
		str = malloc(sizeof(char) * (i + j + 1));
	else
	{
		printf(" \n %d fot\n", i + n + 1);
		str = malloc(sizeof(char) * (12));
	}
	if (str  == NULL)
		return (NULL);
	printf(" strs is %lu size\n", sizeof(str));
	for (m = 0; m < i; m++)
		str[m] = s1[m];

	printf(" strs is %lu size\n", sizeof(str));
	if (n >= j)
	{
		for (p = 0; p < j; p++)
			str[m++] = s2[p];
	}
	else
	{
		for (p = 0; p < n;  p++)
		{
			printf(" strs is %lu size", sizeof(str));

			m++;
			str[m] = s2[p];
		}
	}

	str[p] = '\0';
	return (str);
}
