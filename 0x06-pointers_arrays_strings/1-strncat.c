#include "main.h"

/**
 * _strncat - appends the src string to the dest string,
 * using the most bytes n from src
 *@dest: leading string
 *@src: ending string
 *@n: number of bytes
 * Return: Always dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/*Find the end of the destination string*/
	while (*ptr != '\0')
	{
		ptr++;
	}
	/*Copy at most n bytes from the source string
	 * to the end of the destination string*/
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	/*Termination at null byte*/
	*ptr = '\0';
	return (dest);
}
