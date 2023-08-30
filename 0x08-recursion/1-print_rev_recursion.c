#include "main.h"
/**
 * _prints_rev_recursion - prints string in reverse
 * @s : dtring to be reversed
 *
 * Return : returns nothing
 */
void _prints_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_prints_rev_string(s + 1);
		_putchar(*s);
	}
	else
		putchar('\n');
}
