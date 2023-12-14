#include <math.h>
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
	int jump_size, start, end, i;

	if (array == NULL || size == 0)
		return (-1);

	jump_size = (int)sqrt(size);
	start = 0;
	end = jump_size;

	while (end < (int)size && array[end] < value)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		printf("Value checked array[%d] = [%d]\n", end, array[end]);
		start = end;
		end += jump_size;
	}

	/*Adjust end to avoid accessing beyond array bounds*/
	end = (end < (int)size) ? end : (int)size - 1;

	/*Found the block for which the element exists*/
	printf("Value found between indexes [%d] and [%d]\n", start, end);

	/* Perform linear search for the element*/
	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
