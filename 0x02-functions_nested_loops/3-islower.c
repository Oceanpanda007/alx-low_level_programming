#include "main.h"
#include <ctype.h>
/**
 * This program checks if input is a lower case character.
 *
 * Return: 1 when True else return 0.
 */

int _islower(int c)
{
	if(c >= 97 && c<=122 )
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}

