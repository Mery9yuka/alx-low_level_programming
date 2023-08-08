#include "main.h"
/**
 * *create_array - function that creates an array of chars
 * @size: size of array
 * @c: char to init
 * Return: a pointer to array initialized or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *i = malloc(size);

	if (size == 0 || i == 0)
		return (0);

	while (size--)
		i[size] = c;
	return (i);
}
