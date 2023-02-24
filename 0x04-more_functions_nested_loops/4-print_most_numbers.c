#include "main.h"
/**
* print_most_numbers - function that prints numbers from 0 - 9
* Return: 0 always
*/

void print_most_numbers(void)
{
	int counter = 0;

	while (counter < 10)
	{
		if (counter != 2 && counter != 4)
		{
			_putchar(counter + '0');
		}
		counter++;
	}
	_putchar('\n');
}
