#include "main.h"

/**
* free_grid - frees a 2-dimensional array given to the function
*@grid: pointer to a 2-dimensional array
*@height:rows of the array
*Return:returns nothing
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
