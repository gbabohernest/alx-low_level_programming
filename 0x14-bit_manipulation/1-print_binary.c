#include "main.h"

/**
* print_binary - Prints binary representation of a number
* @n: Number to be printed in binary
* Return: nothing(void)
*/

void print_binary(unsigned long int n)
{
	unsigned long int mask = (sizeof(unsigned long int) * 8);
	unsigned long int bit_shift, zeroes = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 2)
	{
		_putchar(n + '0');
		return;
	}
	for (; mask > 0; mask--)
	{
		bit_shift = n >> (mask - 1);

		if (bit_shift & 1)
		{
			zeroes = 1;
		}
		if ((bit_shift & 1) && (zeroes == 1))
		{
			_putchar('1');
		}
		else if (zeroes)
		{
			_putchar('0');
		}
	}
}
