#include "main.h"
/**
 * _strcat - concatnates two strings
 * @dest : the destination string 
 * @src : the sorce to be appended to dest
 * Return : return the pointer to the string
 *
 */
char *_strcat(char *dest, char *src)
{
	int len;
	
	while (dest != '\0')
	{
		dest++;
	}
	while (src != '\0')
	{
		*(dest++) = *(src++);
	}
	return dest
}

		
		
