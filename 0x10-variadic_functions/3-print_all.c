#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints any data type.
 * @format:  a constant pointer to the string of data types
 *
 * Return : nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i;

	i = 0;
	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				break;
		}
	if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[i + 1] != '\0')
		printf(", ");
	++i;
	}
	printf("\n");
	va_end(args);
}

