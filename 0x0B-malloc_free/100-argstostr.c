#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatinates all args 
 * @ac : number of arguments
 * @av : array of args
 * Return: return a pointer to  string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *str_arr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			k++;
		k++;
	}
	str_arr = malloc(sizeof(char) *( k + 1));
	if (str_arr == NULL)
		return (NULL);
	l = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			str_arr[l] =  av[i][j];
			l++;
		}
		str_arr[l] = '\n';
		l++;
	}
	str_arr[l] = '\0';
	return (str_arr);
}
