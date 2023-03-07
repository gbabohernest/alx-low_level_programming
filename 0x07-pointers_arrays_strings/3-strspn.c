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
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				prefix_len++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (prefix_len);
			}
		}
		s++;
	}
	return (prefix_len);
}
