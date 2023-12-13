#include <math.h>
#include "search_algos.h"
/**
* binary_search - Searches for a value in a sorted array of integers.
* @array: A pointer to the first element of the array to search.
* @size: The number of elements in the array.
* @value: The value to search for.
* Return: The index where the value is located, otherwise -1
*/

int binary_search(int *array, size_t size, int value)
{
	size_t start, end, index;
	int middle;

	if (array == NULL)
		return (-1);

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		/*print the current array | subarray*/
		printf("Searching in array: ");
		for (index = start; index <= end; index++)
		{
			printf("%d", array[index]);
			if (index < end)
				printf(", ");
		}
		printf("\n");

		/*find middle element of the array*/
		middle = (int)floor((double)(start + end)/2);

		if (value < array[middle])
		{	/*search the lower bound of the array*/
			end = middle - 1;
		}
		else if (value > array[middle])
		{	/*search the upper bound of the array*/
			start = middle + 1;
		}
		else
		{
			/*found the value*/
			return (middle);
		}
	}
	return (-1);
}
