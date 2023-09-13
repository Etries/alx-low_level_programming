#include <stdio.h>
/**
 *print_name - prints a name given.
 *@name: pointer to a string
 *@f: function pointer that points to a given fun
 *
 *Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
