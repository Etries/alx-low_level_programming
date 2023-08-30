#include "main.h"

/**
 * sqr_eval - evaulates passible swuare roots
 * @x: parameter one
 * @y: parameter two
 *
 * Returns: on success 1 ans failure -1
 */
int sqr_eval(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y >x)
		return (-1);
	return sqr_eval(x, y + 1);
}


/**
 *sqrt_recursion - returns natural square root of a number
 *@n : number parameter
 *
 * Return: retunrs the sware root
 */
int _sqrt_recursion(int n)
{
	return(sqr_eval(n, 1));
}
