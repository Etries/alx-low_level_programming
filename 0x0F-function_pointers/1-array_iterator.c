#include <stdio.h>

/**
 * array_iterator - execute a fun on the elements
 * @array: integer array parameter
 * @size: size of the array
 * @action: function pointer
 *
 * Retuen: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size > 0 && action)
	{
		while (i <  size)
		{
			action(array[i]);
			i++;
		}
	}
}
