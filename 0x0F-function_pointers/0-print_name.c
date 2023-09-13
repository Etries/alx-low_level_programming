/**
 *print_name - prints a name given.
 *@name: pointer to a string
 *@f: function pointer that points to a given fun
 *
 *Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
/**
 * if (name && f)
 *		f(name);
*	else
*		return;
*/
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
