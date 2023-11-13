#include "main.h"

/**
 * _isdigit - checks a value if it is a digit or not
 * @c: the value to be checked
 *
 * Return: return 1 if it is digit or 0 if not
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
