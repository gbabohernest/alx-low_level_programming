#include "main.h"
/**
* print_diagonal - function draws a diagonal line to the std output
*@n: number of times \ character should be printed
* Return: always 0
*/

void print_diagonal(int n)
{
	int count, value;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (count = 0; count < n; count++)
	{
		for (value = 0; value < count; value++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
