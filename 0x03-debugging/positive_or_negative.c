#include <stdlib.h>
#include "main.h"
#include <time.h>
#include <stdio.h>
/**
* main - Entry point function This
* Return: Always success (0)
*
*/
void positive_or_negative(int n)
{

	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);
	printf("\n");
}
