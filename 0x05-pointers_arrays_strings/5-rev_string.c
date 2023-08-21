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
	int i, j, last;
	char tmp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	last = i - 1;

	for (j = 0; j < i / 2; j++)
	{
		tmp = s[j];
		s[j] = s[last];
		s[last--] = tmp;
	}
}
