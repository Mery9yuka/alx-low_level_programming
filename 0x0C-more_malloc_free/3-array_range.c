#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: The starting int
 * @max: The maximum int
 * Return: array, of integers
*/
int *array_range(int min, int max)
{
	int l, i;
	int *m;

	if (min > max)
		return (NULL);

	l = max - min + 1;

	m = malloc(sizeof(int) * l);

	if (m == 0)
		return (NULL);

	for (i = 0; min <= max; i++)
		m[i] = min++;

	return (m);
}
