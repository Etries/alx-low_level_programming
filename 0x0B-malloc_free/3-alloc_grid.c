#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *alloc_grid - prints a 2-dimensional arrat of ints.
 *@width : the number of columns
 *@height : number of rows
 *Return : returns pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **;
	
	if ((width <= 0) || (height <= 0 ))
		return (NULL);

	if (arr == NULL)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr != NULL)
	{
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] != NULL)
		{
			for (j = 0; j < width; j++)
				arr[i][j] = 0;
		}
		else
		{
			while (i >= 0)
			{
				free(arr[i]);
				i--;
			}
			free(arr);
			return (NULL);
		}
	}
	return (arr);
}

