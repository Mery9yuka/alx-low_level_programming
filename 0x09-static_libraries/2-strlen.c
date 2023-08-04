#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: input of string
 * Return: sting length
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
		++length;

	return (length);

}
