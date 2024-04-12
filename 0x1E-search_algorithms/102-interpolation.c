#include "search_algos.h"
/**
 * interpolation_search - func that searches for a value in an array of
 * ints using the interpolation search algorithm
 * @array: array to search
 * @size: size of the array
 * @value: value to search in
 * Return: -1 if NULL, Otherwise 1st index where the value is in
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t position, low, high;
	double y;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		y = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		position = (size_t)(low + y);
		printf("Value checked array[%d]", (int)position);

		if (position >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[position]);
		}

		if (array[position] == value)
			return ((int)position);

		if (array[position] < value)
			low = position + 1;
		else
			high = position - 1;

		if (low == high)
			break;
	}
	return (-1);
}
