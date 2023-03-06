#include "main.h"

/**
*_strchr -locates a character in a string
*
*@s: string to be searched
*@c: string to be located
*
*Return:If c is found - a pointer to the first occurence.
*       If c is not found - NULL.
*/

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] >= '\0')
	{

		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
