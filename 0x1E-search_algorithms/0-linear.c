#include "search_algos.h"

/**
* linear_search - Searches for a value in an array of integers
* @array: A pointer to the first element of the array to search in
* @size: Total number of elements in the array
* @value: Value to search for in the array
* Return: first index where value is located, otherwise -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t index;
	int element;

	if (array == NULL)
		return (-1);

	/*iterate through the array to find the value*/
	for (index = 0; index < size; index++)
	{
		element = array[index];
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);

		if (element == value)
			return (index);
	}
	return (-1);
}
