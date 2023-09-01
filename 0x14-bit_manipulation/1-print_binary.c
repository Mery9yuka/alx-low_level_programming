#include "main.h"


/**
 * print_binary - function that print a binary representation of a nb.
 * @n: an unsigned long int
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int val;
	int s;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (val = n, s = 0; (val >>= 1) > 0; s++)
		;

	for (; s >= 0; s--)
	{
		if ((n >> s) & 1)
			printf("1");
		else
			printf("0");
	}
}
