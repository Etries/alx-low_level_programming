#include "main.h"

/**
 *_puts_recursion - prints a string. followed by a new line.
 *@S : the string to be printed
 *
 * Return : retunrs nothing
 */
void _puts_recursion(char *s)
{
	if (s == '\0')
		_putchar('\n');
	_putchar(s);
	_puts_recursion(s++);
}	