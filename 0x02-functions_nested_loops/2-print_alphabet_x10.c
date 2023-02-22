#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
	int counter = 0;
	char c;

	for (counter = 0; counter < 10; counter++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
