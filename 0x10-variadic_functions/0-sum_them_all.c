#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - adds all arguments
 *@n: The number of arguments to be passed
 *
 *Return: The sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args_list;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(args_list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args_list, int);
	va_end(args_list);
	return (sum);
}
