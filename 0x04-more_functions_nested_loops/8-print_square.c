#include "main.h"
/**
* print_square - function that prints a square.
*@size:the size of the square
*Return: always 0
*/

void print_square(int size)
{
	int count, value;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (count = 0; count < size; count++)
	{
		for (value = 0; value < size; value++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
