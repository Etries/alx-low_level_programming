#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: array to be reversed
 * @n: number of elements to be swapped
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	n = n - 1;
	for (i = n ; i > (n + 1) / 2; i--)
	{
	tmp = a[n - i];
	a[n - i] = a[i];
	a[i] = tmp;
	}
}
