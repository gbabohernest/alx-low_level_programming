#include "search_algos.h"

/**
* jump_search - Searches for a value in a sorted
*		array using Jump search algorithm
* @array: Pointer to the first element of the array
*	  to search in
* @size: Number of elements in the array
* @value: Value to search for
*
* Return: Index where the value is located, or -1
*	  if not present or if array is NULL
*/

int jump_search(int *array, size_t size, int value)
{
	size_t jump_size, start, i;

	if (array == NULL || size == 0)
		return (-1);

	jump_size = sqrt(size);

	i = start = 0;
	while (start < size && array[start] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		i = start;
		start += jump_size;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, start);

	start = start < size - 1 ? start : size - 1;

	while (i < start && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
	}

	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
