#include <stdio.h>

/**
*main - display all lowercase alphabets  followed by upper case
*
*Return: will return (0) (success)
*
*/
int main(void)
{
	int small_alphabet = 'a';
	int capital_alphabet = 'A';

	while (small_alphabet <= 'z')
	{
		putchar(small_alphabet);
		small_alphabet++;
	}
	while (capital_alphabet <= 'Z')
	{
		putchar(capital_alphabet);
		capital_alphabet++;
	}
	putchar('\n');
	return (0);
}
