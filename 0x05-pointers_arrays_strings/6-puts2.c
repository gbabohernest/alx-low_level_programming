#include "main.h"

/**
* puts2- prints every other character of a string
*@str: character to be printed
* Return: nothing
*/

void puts2(char *str)
{
	int i;

	/*while (str[i] != '\0')
	{
		if (i % 2 == 0)
		_putchar(str[i]);
		i++;
	}
	_putchar('\n'); */

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
