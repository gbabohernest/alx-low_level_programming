#include "main.h"

/**
* _strcat - concatenates two strings.
*
*@dest:string to be used
*@src:string to be used
*
* Return: pointer to the resulting string
*/

char * _strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{

		dest++;
	}
	while (*src != '\0')
	{
		*dest += *src;
		dest++;
		src++;
	}
	return (dest);
}

