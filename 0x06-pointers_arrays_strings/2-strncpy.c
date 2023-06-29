#include "main.h"

/**
 * _strncpy - copies the src string to the dest string,
 * using the most bytes n from src
 *@dest: string to paste copied string
 *@src: string to copy characters
 *@n: number of bytes
 * Return: Always dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/*
	* Copy at most n bytes from the source string
	* to the beginning of the destination string
	*/
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	/*
	 * Termination at null byte
	 */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
