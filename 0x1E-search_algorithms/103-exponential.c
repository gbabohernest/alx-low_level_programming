#include "search_algos.h"

int exp_search_helper(int *array, size_t start, size_t end, int value);

/**
* exponential_search - Searches for a value in a sorted array
*			 of integers using the Exponential
*			 search algorithm
*
* @array: A Pointer to the first element of the array to search in.
* @size: The number of elements in array.
* @value: The value to search for.
*
* Return: The first index where value is located, otherwise -1
*/


int exponential_search(int *array, size_t size, int value)
{
	size_t start, end, index;

	if (array == NULL)
		return (-1);

	/*Handle case where the value is at the first index*/
	if (array[0] == value)
	{
		printf("Value checked array[1] = [%d]\n", array[1]);
		return (0);
	}
	start = 1;
	end = 2;

	while (end < size && array[end] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		start = end;
		end *= 2;
		/*start *= 2;*/
	}
	/*Ensure end does not exceed array size*/
	end = (end < size) ? end : size - 1;

	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);

	index = exp_search_helper(array, start, end, value);

	return (index);
}


/**
* exp_search_helper - Perform binary search in a sorted array
*		      to find the index of a given value.
*
* @array: Pointer to the first element of the sorted array.
* @start: Starting index of the search range.
* @end: Ending index of the search range.
* @value: The value to search for.
*
* Return: The index of the found value, or -1 if the value is
*	  not present.
*/

int exp_search_helper(int *array, size_t start, size_t end, int value)
{
	size_t mid, i;

	while (start <= end)
	{
		mid = (start + end) / 2;

		/*Print the current array being searched*/
		printf("Searching in array:");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < end)
				printf(",");
		}
		printf("\n");

		/*Check if middle element is the target value*/
		if (array[mid] == value)
			return ((int)mid);

		if (array[mid] < value)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	return (-1);
}
