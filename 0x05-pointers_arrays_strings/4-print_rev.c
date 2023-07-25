#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string.
 */
void print_rev(char *s)
{
	int n = 0;

	while (s[n])
	n++;

	while (n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
