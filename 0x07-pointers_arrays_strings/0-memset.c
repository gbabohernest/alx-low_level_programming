#include "main.h"

/**
* _memset - fills the first n bytes
* of memory area pointed by s with
* the constant byte b
*
*@s:a pointer to a char
*@b:a constant char
*@n:n(size) of memory
*
*Return: a pointer to a char
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
