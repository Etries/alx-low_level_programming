#include "main.h"
/**
 * last_index - gets last index
 * @s:  string parameter
 *
 * Return: returns the last index
 */
int last_index(char *s)
{
	int n = 0;

	if (*s != '\0')
		n += last_index(++s) + 1;
	return (n - 1);
}
/**
 * checks_palindrome - checks if agiven substring are palindrome
 * @s: string parameter
 * @i: index of a char to be checked
 * @j: index of a char to be checked
 * Return: return 1 if palindrome else 0
 */
int checks_palindrome(char *s, int i, int j)
{
	if (i == j)
		return (1);
	else if (s[i] == s[j])
		checks_palindrome(s, ++i, --j);
	else
	return (0);

}

/**
 *is_palindrome - checks if a string is a palindrome
 *@s: string parameter
 *
 * Return: return 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int i, j;

	i = 0;
	j = last_index(s);
	return (checks_palindrome(s, i, j));
}
