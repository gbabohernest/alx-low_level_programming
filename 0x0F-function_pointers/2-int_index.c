#include "function_pointers.h"

/**
* int_index - Function that searches for an integer
* @array: array to be searched
* @size: number of elements in the array
* @cmp: Function pointer
* Return: The index of the first element for
*	which the cmp function does not return 0
*	else return -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size < 1 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
