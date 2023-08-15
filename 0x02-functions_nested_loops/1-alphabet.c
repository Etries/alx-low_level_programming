#include "main.h"
/**
* print_alphabet - This will print letters from a-z 10 times
*
* Return: Always success (0)
*
*/
void print_alphabet(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
	}
}

