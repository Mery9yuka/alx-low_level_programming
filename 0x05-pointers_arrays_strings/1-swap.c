#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: input 1
 * @b: input 2
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
