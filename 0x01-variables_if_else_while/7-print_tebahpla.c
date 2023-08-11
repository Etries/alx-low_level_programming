#include <stdio.h>

/**
*main - display all lowercase alphabets in decreasing order z-a
*
*Return: will return (0) (success)
*
*/
int main(void)
{
	int alphabet;

	alphabet = 'z';
	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
