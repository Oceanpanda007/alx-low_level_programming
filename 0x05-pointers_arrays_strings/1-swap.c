#include "main.h"

/**
 * swap_int  - swaps the values of two integers
 * @a: first input integer
 * @b: second input integer
 *
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
	int swp = *a; 
	*a = *b;
	*b = swp;
}
