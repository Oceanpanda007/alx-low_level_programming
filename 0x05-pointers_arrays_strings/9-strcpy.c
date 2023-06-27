#include "main.h"
#include<stdio.h>

/**
 *_strcpy - copies the string pointed to by src
 *including the terminating null byte (\0)
 *to the buffer pointed to by dest.
 *@dest: pointer of destination of string.
 *@src: pointer of source of string.
 *Return: not.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; j < i ; x++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
