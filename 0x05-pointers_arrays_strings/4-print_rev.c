#include "main.h"
/**
 * print_rev - reverses a string.
 * @s: each character of the string to be reversed.
 * Return: (0)
 */
void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
