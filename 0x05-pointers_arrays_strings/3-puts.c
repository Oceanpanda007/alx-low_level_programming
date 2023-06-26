#include "main.h"
#include <unistd.h>

/**
 *_puts - prints a string, followed by a line, to stdout
 *@str: characters for the string to be printed.
 *Return: not.
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
