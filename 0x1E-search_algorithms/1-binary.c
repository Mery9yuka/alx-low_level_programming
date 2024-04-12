#include "search_algos.h"
/**
  * binary_search - Function that searches for a value in a sorted array
  * of ints using binary search algorithm
  * @array: A pointer to the 1st element of the array to searchin
  * @size: The nb of elements in array.
  * @value: The value to search for
  * Return: -1: If the value is not present or the array is NULL,
  *         Or, the index where the value is located
  */
int binary_search(int *array, size_t size, int value)
{
	size_t y, prev, next;

	if (array == NULL)
		return (-1);

	for (prev = 0, next = size - 1; next >= prev;)
	{
		printf("Searching in array: ");
		for (y = prev; y < next; y++)
			printf("%d, ", array[y]);
		printf("%d\n", array[y]);

		y = prev + (next - prev) / 2;
		if (array[y] == value)
			return (y);
		if (array[y] > value)
			next = y - 1;
		else
			prev = y + 1;
	}
	return (-1);
}
