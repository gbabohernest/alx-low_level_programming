#include "main.h"
/**
* more_numbers - function prints 10x the numbers 0-14.
*Return: always 0
*/

void more_numbers(void)
{
	int counter, value;

	for (counter = 0; counter < 10; counter++)
	{
		for (value = 0; value <= 14; value++)
		{
			if (value >= 10)
			_putchar('1');
			_putchar(value % 10 + '0');
		}
		_putchar('\n');
	}
}
