#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: String of variable pointer
 * Return: String that is encoded
 */


char *leet(char *str)
{
	int i = 0;

	char leet[256] = {
	['a'] = '4', ['A'] = '4',
	['e'] = '3', ['E'] = '3', ['o'] = '0', ['O'] = '0',
	['t'] = '7', ['T'] = '7', ['l'] = '1', ['L'] = '1'
	};
	while (str[i] != '\0')
	{
		if (leet[str[i]] != '\0')
			str[i] = leet[str[i]];
		i++;
	}
	return (str);
}
