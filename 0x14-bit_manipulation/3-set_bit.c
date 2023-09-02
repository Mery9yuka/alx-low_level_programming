#include "main.h"


/**
 * set_bit -  function that sets the value of a bit to 1.
 * @n: pointer to an unsigned long int to be modified.
 * @index: index of the bit
 *
 * Return: 1 or -1 if any error occur
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b = 1;

	if (index > 63)
		return (-1);

	*n = ((b << index) | *n);
	return (1);
}
