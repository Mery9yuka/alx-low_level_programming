#include "variadic_function.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: nb of arguments
 * @...: int of sum
 * Return: 0
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a = 0, i = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		a += va_arg(ap, int);
	va_end(ap);
	return (a);
}
