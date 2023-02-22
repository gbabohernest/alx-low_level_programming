#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
	{
		result = 1;
		return (result);
	}
	else
	{
		result = 0;
		return (result);
	}
	return (0);
}
