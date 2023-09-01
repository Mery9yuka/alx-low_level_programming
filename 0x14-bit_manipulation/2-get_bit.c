#include "main.h"


/**
 * get_bit - function that returns a value of a bit at a given index
 * @n: an unsigned long int to get the bit
 * @index: index of the bit
 *
 * Return: value of the bit, or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int b;

	if (sizeof(n) * 8 < index)
		return (-1);

	b = n >> index;

	return (b & 1);
}
