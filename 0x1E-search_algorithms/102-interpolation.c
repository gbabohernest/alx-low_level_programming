#include "search_algos.h"

/**
* interpolation_search - Searches for a value in a sorted array
*			 of integers using the interpolation
*			 search algorithm
*
* @array: A Pointer to the first element of the array to search in.
* @size: The number of elements in array.
* @value: The value to search for.
*
* Return: The first index where value is located, otherwise -1
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;


	while (high >= low)
	{
		/*find estimated index*/
		pos = low + (((double)(high - low) / (array[high] -
				array[low])) * (value - array[low]));

		/*Chck if the calculated index is within bounds*/
		if (pos < size)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[(int)pos]);

			if (array[pos] == value)
			{
				return ((int)(pos));
			}
			if (array[pos] > value)
			{
				high = pos - 1;
			}
			else
			{
				low = pos + 1;
			}
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
	}
	return (-1);
}
