#include "function_pointers.h"

/**
* array_iterator - Executes a function given as an
*		argument on each element of an array
*
* @array: array of integers
* @size: size of array
* @action: pointer to the function pass as an argument
*
* Return: nothing (void)
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t counter;

	for (counter = 0; counter < size; counter++)
	{
		/*(*action)(array[counter]);*/
		action(array[counter]);
	}
}
