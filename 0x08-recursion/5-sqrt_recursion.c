
#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: int n
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return _sqrt(n, 1);
}

/**
 * _sqrt - _sqrt_recursion
 * @n: int parameter
 * @i: int parameter
 * Return: sqrt
 */
int _sqrt(int n, int a)
{
	if (n < 0)
		return (-1);
	if ((a * a) > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (_sqrt(n, a + 1));
}
