#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - Allocates memory using malloc
* Description:	if malloc fails, the malloc_checked function
*		should cause normal process termination with
*		a status value of 98
*
* @b: amount to be allocated in bytes
*
* Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
