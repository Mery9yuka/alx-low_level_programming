#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase.
 * Return 0
 */
void print_alphabet_x10(void)
{
	int i = 1;
	char aa;

	while (i <= 10)
	{
		for (aa = 'a' ; aa <= 'z'; aa++)
			_putchar(aa);
		_putchar('\n');
		i++;
	}
}
