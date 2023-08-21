#include "main.h"
/**
 * rev_string - reverses a string
 * @s : string to be reversed
 *
 * Return : nothing
 *
 */
void rev_string(char *s)
{
	int i, j;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	last = i - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[j];
		s[j] = s[last];
		s[last--] = tmp;
	}
}
