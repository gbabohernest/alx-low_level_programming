#include "main.h"

/**
*_strpbrk - locates the first occurance in the string
*
*@s: string to be searched
*@accept: string to search for
*
*Return: a pointer to the byte
*	in s that matches one
*	of the byte in accept,
*	or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
