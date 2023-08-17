#include "3-calc.h"

/**
 * op_add - returns the sum of 2 integers
 * @a: the first int
 * @b: the second int
 *
 * Return: the sum of 2 int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference between two integers
 * @a: the first int
 * @b: the second int
 *
 * Return: the difference between 2 int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of 2 integers
 * @a: the first int
 * @b: the second int
 *
 * Return: the product of 2 integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the quotient of 2 integers
 * @a: the first int
 * @b: the second int
 *
 * Return: the quotient of 2 integers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the remainder of 2 integers
 * @a: the first int
 * @b: the second int
 *
 * Return: the remainder of 2 integers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
