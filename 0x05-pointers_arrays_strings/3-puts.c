#include "main.h"

/**
 *_puts - prints a string, followed by a line, to stdout
 *@str: characters for the string to be printed.
 *Return: nothing.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar("%p", *str);
		str++;
	}
	_putchar('\n');
}
