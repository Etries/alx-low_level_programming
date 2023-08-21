#include "main.h"
/**
 * puts2 - prints everyother character of a string
 * @str : string to be printed
 *
 * Return : nothing
 *
 */
void puts2(char *str)
{
	int i;
	int len;


	
	while (str[len])
		len++;
	for (i = 0; i < len; i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
