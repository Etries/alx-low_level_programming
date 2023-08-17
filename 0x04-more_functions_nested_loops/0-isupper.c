#include "main.h"
/**
 * _isupper - checks if a characters is upper or not
 *
 * Return: return 1 if it is upper or 0 if it is not
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
	
