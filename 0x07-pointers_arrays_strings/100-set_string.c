#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s : pointer to address of string
 * @to :  pointer to the value
 *
 * Return: returns nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
