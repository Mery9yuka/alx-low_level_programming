#include "search_algos.h"
/**
 * linear_search - Function that searches for a value in an array of
 * ints using the linear search algorithm
 * @array: points to the 1st element to search in
 * @size: nb of element in array
 * @value: value to search for
 * Return: -1 or NULL
 */
int linear_search(int *array, size_t size, int value)
{
	int y;

	if (array == NULL)
		return (-1);

	for (y = 0; y < (int)size; y++)
	{
		printf("Value checked array[%u] = [%d]\n", y, array[y]);
		if (value == array[y])
			return (y);
	}
	return (-1);
}
