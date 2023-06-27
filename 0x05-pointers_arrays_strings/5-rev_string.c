#include <stdio.h>
#include "main.h"
/**
 *rev_string - reverses a string.
 *@s: each character of the string to be reversed.
 *Return: nothing.
 */
void rev_string(char *s)
{
	int len = 0;
	int l = 0;
	char *a = s;
	int b = 0;
	int x;
	char n;

	while (*a != '\0')
	{
		a++;
		len++;
	}
	l = len - 1;
	for ( ; b < ((l / 2) + 1) ; b++)
	{
		x = (l - b);
		n = s[b];
		s[b] = s[x];
		s[x] = n;
	}
}
