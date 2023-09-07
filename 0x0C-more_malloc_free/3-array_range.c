#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 *
 * @min: min value integer
 * @max: max value integer
 *
 * Return: a pointer to the array
 */
int *array_range(int min, int max)
{
	int *arr;
	int gap = 0, i;


	if (min > max)
	{
		return (NULL);
	}
	gap = max - min + 1;
	arr = malloc(sizeof(int) * gap);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < gap; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
