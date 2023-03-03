#include "main.h"

/**
* string_toupper - changes all lowercase letter
* of a string to uppercase
*
*@str: string to change
*
* Return: a string in uppercase
*/

/**
*ASCII value of lowercase character range is 97 - 122
*subtracting 32 from its ASCII value will convert it to uppercase
*/

char *string_toupper(char *str)
{
	int count = 0;

	while (str[count])
	{
		if (str[count] >= 97 && str[count] <= 122)
		{
			str[count] -= 32;
		}
		count++;
	}
	return (str);
}
