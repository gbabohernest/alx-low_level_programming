#include "main.h"

/**
* _strncat - function that concatenates two strings
* using the most n bytes from @src
*
*@dest: destination string
@src: source string
@n: num of bytes from src
*
* Return: pointer to the resulting string
*/

char *_strncat(char *dest, char *src, int n)
{
	int count, i;
	
	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[count] = src[i];
		count++;
		i++;
	}
	/*dest[count] = '\0';*/
	return (dest);
}
