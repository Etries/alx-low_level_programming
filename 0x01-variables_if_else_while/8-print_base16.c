#include <stdio.h>

/**
*main - display hexadecimal numbers n alphabets
*
*Return: will return (0) (success)
*
*/
int main(void)
{
	int num;
	int alph;

	num = 0;
	alph = 'a';
	while (num < 10)
	{
		putchar(num + 48);
		num++;
	}
	while (alph <= 'f')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
