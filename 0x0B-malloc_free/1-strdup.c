#include "main.h"
/**
 * *_strdup - function that return a pointerto a new locate space
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	int n = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++);
	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (; n < size; n++)
			m[n] = str[n];
	}
	return (m);
}
