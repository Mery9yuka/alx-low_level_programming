#include "main.h"
/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 *
 * Description: This function prints the given integer,
 * including negative numbers,
 *              using the _putchar function.
 */
void print_number(int n)
{
	unsigned int div;

	div = n;

	if (n < 0)
	{
		_putchar('-');
		div = -n;
	}

	if (div / 10 != 0)
	{
		print_number(div / 10);
	}
	_putchar((div % 10) + '0');
}
