#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory of an array using malloc.
* @nmemb: number of elements in array.
* @size: size of each elements of the array.
*
* Return: If nmemb = 0, size = 0, or the function fails - NULL.
*	Otherwise - a pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(ptr) + i) = 0;
	}
	return (ptr);
}
