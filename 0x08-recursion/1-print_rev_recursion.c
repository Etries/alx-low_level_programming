#include "main.h"
/**
 * _print_rev_recursion - prints string in reverse
 * @s : dtring to be reversed
 *
 * Return : returns nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_string(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}
