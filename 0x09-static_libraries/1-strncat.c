#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: The destination string to which the source will be appended.
 * @src: The source string to be appended to the destination.
 * @n: The maximum number of bytes to be copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *a = dest;

	while (*dest)
		dest++;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (a);
}
