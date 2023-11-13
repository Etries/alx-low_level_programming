#include "main.h"
#include <stddef.h>
/**
*_strstr - The _strstr() function finds the first occurrence
* of the substring needle in the string haystack.
*@haystack: string where the search is made
*@needle: string to be ssearche
*Return:Returns a pointer to the beginning of the located
* substring, or NULL if not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return (NULL);
}
