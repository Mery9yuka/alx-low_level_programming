#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: pointer or NULL
*/
char *str_concat(char *s1, char *s2)
{
	int a, b;
	char *str;

	for (a = 0; s1 != NULL && *(s1 + a) != '\0'; a++)
		;
	for (b = 0; s2 != NULL && *(s2 + b) != '\0'; b++)
		;
	str = malloc(sizeof(char) * a + b + 1);
	if (str)
	{
		for (a = 0; s1 != NULL && *(s1 + a) != '\0'; a++)
			*(str + a) = *(s1 + a);
		for (b = 0; s2 != NULL && *(s2 + b) != '\0'; b++)
			*(str + a + b) = *(s2 + b);
		*(str + a + b) = '\0';
		return (str);
	}
	else
	{
		return (NULL);
	}
}
