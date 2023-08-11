#include "main.h"
/**
 * *string_nconcat - function that concatenates two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * @n: max nb of bytes to concatenate
 * Return: pointer to space in memory contain concatenate string.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int m = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		m++;

	concat = malloc(sizeof(char) * (m + 1));

	if (concat == NULL)
		return (NULL);

	m = 0;

	for (i = 0; s1[i]; i++)
		concat[m++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		concat[m++] = s2[i];

	concat[m] = '\0';

	return (concat);
}
