#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints all numbers in args followed by
 * a new line
 * @separator: the string to be printed between numbers
 * @n : number of args passed 
 * Return : returns nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args_list;
	unsigned int i;

	va_start(args_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args_list, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args_list);
}
