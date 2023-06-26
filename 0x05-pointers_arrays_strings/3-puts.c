#include "main.h"
#include <unistd.h>

/**
 *_puts - prints a string, followed by a line, to stdout
 *@str: characters for the string to be printed.
 *Return: not.
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
