#include "main.h"

/**
* _memcpy - copies n bytes from memory area
*
*@dest: destination of copied memory
*@src: memory to be copied
*@n: number of bytes to copied
*Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] += src[i];
		i++;
	}
	return (dest);
}
