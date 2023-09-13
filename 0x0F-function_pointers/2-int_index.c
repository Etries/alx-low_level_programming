#include <stdio.h>
/**
 * int_index - searches for an integer in array
 * @array: arraay of numbers
 * @size: Number of elements
 * @cmp: function pointer
 * Return: Always the integer index or -1 if failed to do so
**/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array &&  cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
