#include "main.h"
/**
* print_alphabet_x10 - This will print letters from a-z 10 times
*
* Return: Always success (0)
*
*/
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
	}
}

