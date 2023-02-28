#include "main.h"

/**
* print_rev()- function that print a string in reverse
*@s:character parameter
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

