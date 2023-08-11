#include <stdio.h>

/**
*main - display all digits 0-9 with putchar
*Return: will return (0) (success)
*
*/
int main(void)
{
	int i;

	for (i = 0;  i < 10; i++)
		putchar(i + 48);
	putchar('\n');
	return (0);
}
