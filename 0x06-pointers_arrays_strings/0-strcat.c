#include "main.h"

/**
* _strcat - concatenates two strings.
*
*@dest:destination string
*@src:source string
*
* Return: pointer to the resulting string
*/

char *_strcat(char *dest, char *src)
{
	int count, i;

	count = 0;

	while (dest[count] != '\0')
	{
		count++;
	}

	i = 0;
	while (src[i] != '\0')
	{
		dest[count] = src[i];
		count++;
		i++;
	}
	dest[count] = '\0';
	return (dest);
}

