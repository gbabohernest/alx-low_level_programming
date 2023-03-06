#include "main.h"

/**
*_strspn - gets the lenght of a prefix substring
*
*@s: initial segment of string
*@accept: string length to be calculated
*
*Return: number of bytes from initial
*	 segment consisting only bytes
*	from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int prefix_len = 0;
	int i = 0;

	while (s[i] >= '\n')
	{
		if (accept[i] < '\n')
		{
			prefix_len++;
		}
		i++;
	}
	return (prefix_len);
}
