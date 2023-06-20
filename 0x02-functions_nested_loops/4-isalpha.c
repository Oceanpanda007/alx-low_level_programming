#include "main.h"
/**
 * This function _isalpha checks for alphabetic characters
 *
 * Returns 1 when True else 0
 */

int _isalpha( int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
