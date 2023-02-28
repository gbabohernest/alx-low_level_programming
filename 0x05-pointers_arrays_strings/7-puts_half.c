#include "main.h"
/**
* puts_half- prints half of a string
*@str: string to be printed
* Return: nothing
*/

void puts_half(char *str)
{
	int length, h;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
		
	}
	
	if (length % 2 == 0)
	{
		h = length / 2;
		while (length > h)
		{
			_putchar(str[h]);
			h++;
		}
	}
	else
	{
		h = (length + 1) / 2;
		while (length > h)
		{
			_putchar(str[h]);
			h++;
		}
	}
	_putchar('\n');
}
