#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: int array
 * @size: array size
 * @action: pointer to function
 * Return: 0
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *e = array + size - 1;
		if (array && size && action)
			while (array <= e)
				action(*array++);
}
