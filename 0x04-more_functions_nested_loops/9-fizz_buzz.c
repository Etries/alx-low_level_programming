#include <stdio.h>
/**
*main : prints a fiz if multiple of 3, buzz multiple of 5 n
fizzbuzz multiple of both
*
*
*Return: returns 0
*/
int main(void)
{
	int num;
	
	num = 1;

	while (num < 100)
	{
	if ((num % 15 == 0))
	printf("FizzBuzz ");

	else if ((num % 3) == 0)
	printf("Fizz ");

	else if ((num % 5) == 0)
	{
		if (num != 100)
		printf("Buzz ");

	else
		printf("Buzz");
	}

	else
		printf("%d ", num);

	num++;
	}
	printf("\n");
	return (0);
}
