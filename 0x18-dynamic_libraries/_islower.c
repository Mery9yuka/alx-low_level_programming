#include "main.h"
/**
 * _islower - check for lowercase character
 * @c: character to check
 * Return: 1 for lowercase character otherwise 0
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
