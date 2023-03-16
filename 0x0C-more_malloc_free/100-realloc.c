#include "main.h"
#include <stdlib.h>

/**
* _realloc - reallocates a memory block using malloc and free
*
* @ptr: pointer to the memory previsouly allocated by malloc
* @old_size: size in bytes of allocated space for `ptr'
* @new_size: size in bytes for new allocated space
*
* Return: Pointer to new memory block, or NULL if error
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *ptr_memory;
	char *copy;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	ptr_memory = malloc(new_size);
	if (!ptr_memory)
	{
		return (NULL);
	}
	copy = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			ptr_memory[i] = copy[i];
		}
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			ptr_memory[i] = copy[i];
		}
	}
	free(ptr);
	return (ptr_memory);
}
