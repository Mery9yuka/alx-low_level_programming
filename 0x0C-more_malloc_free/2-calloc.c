#include "main.h"
/**
* _memset - fills memory with a constant byte
* @s: pointer to put the constant
* @b: constant
* @n: max byte to use
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *j = s;

	for (n--)
		*s++ = b;
	
	return (s);
}
/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: array length
 * @size: The size of each element in bytes
 * Return: A pointer to the allocated memory, or NULL if the allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = malloc(size * nmemb);

	if (i == NULL)
		return (NULL);

	_memset(i, 0, size * nmemb);

	return (i);

}
