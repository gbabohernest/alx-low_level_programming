#include "main.h"
/**
 * _isalpha - a function that checks for alphabet character
 * @c: single  input
 * Return: 1 if int c is an alphabet, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
