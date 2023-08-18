#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @separator: string separator
 * @n: number of arg
 * @...: string to print
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *s;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%s%s", (s = va_arg(ap, char *)) ? s : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
