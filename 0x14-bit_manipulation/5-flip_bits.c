#include "main.h"


/**
 * flip_bits - function that return the number of bits needed to be fliped
 * @n: 1st number
 * @m: 2nd number
 * Return: number of bits needed to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	int y;

	x = n ^ m;
	y = 0;

	while (x)
	{
		y++;
		x &= (x - 1);
	}

	return (y);
}
