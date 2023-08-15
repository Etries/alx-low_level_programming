#include "main.h"
/**
* print_to_98 - prints upto 98
*
*@n: the number to start from
*Return: Nothing
*
*/
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			n++;
		}

	}
	else
	{
		while (n > 98)
		{
			printf("%d", n);
			n--;
		}
	}
}
