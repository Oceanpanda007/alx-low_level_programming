#include "main.h"

/**
 * _strcat - appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 *@dest: leading string
 *@src: ending string
 * Return: Always dest.
*/

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;
	/* Find the end of the destination string*/
	while (*ptr != '\0')
	{
		ptr++;
	}
	/* Copy the source string to the end of the destination string*/
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	/* Add the terminating null byte*/
	*ptr = '\0';
	return (dest);
}
