#include "main.h"
#include "stdlib.h"

/**
*create_array - creates an array of chars,
*initializes it was a specific char
*
*@size:array size
*@c: character to initialize
*
*Return: a pointer to the array /
*	NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	i = 0;

	ptr = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	while (i < size)
	{
		if (ptr != NULL)
		{
			*(ptr + i) = c;
		}
		else
		{
			return (NULL);
		}
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
