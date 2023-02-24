#include "main.h"
/**
* print_numbers - prints num from 0-9 follow by a new line.
* Return: always 0
*/

void print_numbers(void)
{
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		_putchar(counter + '0');
	}
		_putchar('\n');
}
