#include "main.h"

/**
* _strlen_recursion - calculates the lengthof a string
*
*@s: string
*
*Return: length of a string
*/

int _strlen_recursion(char *s)
{
	int str_len;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		str_len = 1 +  _strlen_recursion((s + 1));
	}

	return (str_len);
}

