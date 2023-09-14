#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints any data type.
 * @foramt:  a constant pointer to the string of data types
 *
 * Return : nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;

	va_start(args, format);
	while (*format != '\0')
	{
		switch (*format)
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
					printf("nill");
				else
					printf("%s", str);
				break;
			default:
				break;
		}
	if ((format == 'c' || format == 'i' || format == 'f' ||
					format == 's') && format + 1 != '\0')
		printf(", ");
	++format;
	}
	va_end(args);
}

