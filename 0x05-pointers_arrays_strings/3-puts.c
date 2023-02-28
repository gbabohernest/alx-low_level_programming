#include "main.h"

/**
* _puts - prints a string to the stdout, followed by newline
*@str: character pointer argument
* Return: nothing(void)
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
