#include <stdio.h>

/**
*main - display all lowercase alphabets except q and e
*
*Return: will return (0) (success)
*
*/
int main(void)
{
	int alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'q' || alphabet == 'e')
		{
			alphabet++;
			continue;
		}
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
