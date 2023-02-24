#include "main.h"

/**
*_isupper - function that checks for uppercase character.
*@c: integer parameter
*Return: 1 if c is uppercase, 0 otherwise
*/

int _isupper(int c)
{
	int result;

	if (c >= 'A' && c <= 'Z')
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
