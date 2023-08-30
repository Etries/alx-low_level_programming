#include "main.h"
/**
 * factorial - returns a factorial of a given number
 * @n : number to be calucated
 *
 * Return: returns the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n  == 0)
		return (1);
	return (n * factorial(n - 1));
}
