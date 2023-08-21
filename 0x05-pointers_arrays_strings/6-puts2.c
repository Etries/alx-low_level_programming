#include "main.h"
/**
 * puts2 - prints everyother character of a string
 * @str : string to be printed
 *
 * Return : nothing
 *#include "main.h"
*/
void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
