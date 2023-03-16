#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of intergers.
*
* description:	array created should contain all values
*		from (min - max) included ordered min to max
*
* @min: minimum value to be included in the array
* @max: maximum value to be included in the array
*
* Return: if min > max, malloc fails, return NULL,
*	otherwise a pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int i, len, *p;

	len = 0;
	if (min > max)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		len++;
	}
	p = malloc(len * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
