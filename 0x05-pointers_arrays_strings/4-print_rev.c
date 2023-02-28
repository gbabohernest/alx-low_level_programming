#include "main.h"

/**
* print_rev() - reverse a string and print it to the standard output
*@s: a pointer variable as an argument
* Return: nothing (void)
*/

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (len -= 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}

	_putchar('\n');
}

