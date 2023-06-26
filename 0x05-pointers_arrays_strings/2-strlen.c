#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: each character to the input string
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
