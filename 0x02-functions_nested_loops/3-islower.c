#include "main.h"
/**
 * _islower - checks if input is a lower case character.
 *
 *  @c: The character in ASCII code
 * Return: 1 when True else return 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

