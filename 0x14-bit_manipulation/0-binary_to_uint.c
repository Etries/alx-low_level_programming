#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary into a positive decimal
 * @b: pointer to the binary(As a string)
 *
 * Return: returns a numbers or 0 if b is null
 * or the are some non digits
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, sum;
	int n, base = 1;


	i = 0;
	sum = 0;
	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		i++;
	}
	for (n = i - 1; n >= 0; n--)
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);
		sum += (b[n] - 48) * (base);
		base *= 2;
	}
	return (sum);
}
