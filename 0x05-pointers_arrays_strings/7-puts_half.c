#include <stdio.h>
#include "main.h"
/**
 *puts_half - prints half of a string, followed by a new line..
 *@str: characters of the input string.
 *Return: nothing.
 */
void puts_half(char *str)
{
	int len = 0;
	char *a = str;
	int n;

	while (*a != '\0')
	{
		a++;
		len++;
	}
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}
	for ( ; n < len ; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
