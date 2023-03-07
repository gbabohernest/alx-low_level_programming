#include "main.h"

/**
*_strstr - find the first occurrence of substring
*
*@haystack:string to be searched
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
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
