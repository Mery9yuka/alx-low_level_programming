#include "main.h"


/**
 * binary_to_uint - function that converts a binary number to unsigned int.
 * @b: pointer to string that represent a binary nb.
 * Return: a converted number, 0 if b NULL or
 * have a character that's not '0' or '1'.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x, y;
	int z;

	if (b == NULL)
		return (0);

	for (z = 0; b[z]; z++)
	{
		if (b[z] != '0' && b[z] != '1')
			return (0);
	}

	for (y = 1, x = 0, z--; z >= 0; z--, y *= 2)
	{
		if (b[z] == '1')
			x += y;
	}

	return (x);
}
