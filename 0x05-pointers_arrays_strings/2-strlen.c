#include "main.h"

/**
*_strlen - Function that return the length of a string
*@s:character paramater
* Return: lenght of string
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
