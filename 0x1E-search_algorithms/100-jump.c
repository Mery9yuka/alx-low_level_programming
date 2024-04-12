#include "search_algos.h"
#include <math.h>
/**
 * jump_search - func that searches for a value in an array of
 * ints using the Jump search algorithm
 * @array: array to search
 * @size: nb of elements in array
 * @value: value to search in
 * Return: the index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int y, u, left, index;

	if (array == NULL || size == 0)
		return (-1);

	y = (int)sqrt((double)size);
	u = 0;
	left = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		u++;
		left = index;
		index = u * y;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", left, index);

	for (; left <= index && left < (int)size; left++)
	{
		printf("Value checked array[%d] = [%d]\n", left, array[left]);
		if (array[left] == value)
			return (left);
	}
	return (-1);
}
