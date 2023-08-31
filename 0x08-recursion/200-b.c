#include "main.h"
#include <stdio.h>
/**
 * checks_palindrome - checks if agiven substring are palindrome
 * @s: string parameter
 * @i: index of a char to be checked
 * @j: index of a char to be checked
 * Return: return 1 if palindrome else 0
 */
int checks_palindrome(char *s, int i, int j)
{
	printf("%s and i is %d j is %d \n", s, i, j);
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
	j = 0;
	while (s[j] != '\0')
		j++;
	return (checks_palindrome(s, i, j - 1));
}
int main() {
    char chaine[100] = "radar";
    int pal;
    pal = is_palindrome(chaine);
    printf("%d\n", pal);
    return 0;
}
