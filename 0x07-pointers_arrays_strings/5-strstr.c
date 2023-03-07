#include "main.h"

/**
*_strstr - find the first occurrence of substring
*
*@haystck:string to be searched
*@needle:string to search for
*
*Return: a pointer to beginning of the
*	substring, or NULL if not found
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	
	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if ( haystack[i] == needle[i])
			{
				return (needle);
			}
		}
		haystack++;
	}
	return ('\0');
}
