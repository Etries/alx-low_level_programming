#include "main.h"

/**
* _pow_recursion- returns the power of x to y
*@x : first parameter
*@y: second parameter
*
*Return: returns the result
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
