#include "main.h"

/**
* print_triangle - function that prints a triangle
*@size: is the size of the triangle
* Return: always 0
*/

void print_triangle(int size)
{
	int count, spaces, value;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 0; count < size; count++)
		{
			for (spaces = size - count; spaces > 1; spaces--)
			{
				_putchar(' ');
			}

			for (value = 0; value <= count; value++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
