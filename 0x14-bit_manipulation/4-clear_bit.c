#include "main.h"


/**
 * clear_bit - function that sets the value of the bit to 0
 * @n: pointer to the chosen nb
 * @index: index of the bit to be cleared
 * Return: 1 or -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b = 0;

	if (index > 64)
		return (-1);

	*n = (~(b << index) & *n);
	return (1);
}
