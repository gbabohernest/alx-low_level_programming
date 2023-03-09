#include "main.h"

int _palindrome_helper_fun(char *s, int l);
int _str_length(char *s);

/**
* is_palindrome - check if a string is a palindrome
* @s: array of char
* Return: 1 if palindrome, 0 if not
*/

int is_palindrome(char *s)
{
	int length;

	length = _str_length(s) - 1;

	return (_palindrome_helper_fun(s, --length));
}

/**
*_str_length - Get the length of a string
*@s: the string to get the length
*
*Return: the string length
 */

int _str_length(char *s)
{
	if (*s == '\0')

		return (1);
	else
		return (1 + _str_length(++s));
}

/**
*_palindrome_helper_fun - check if a string is a palindrome
*@s: string to be checked
*@l: string len
*Return: an integer value
*/

int _palindrome_helper_fun(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);
		else
			return (_palindrome_helper_fun(++s, l - 2));
	}
	else
		return (0);
}
