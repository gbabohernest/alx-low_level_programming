#include "main.h"

/**
* print_number - prints an integer
*
*@n:integer arg
*
*Return: nothing(void)
*/

void print_number(int n)
{

	int int_len, index;

	int_len = 1000000000;

	if (n < 0)
	{
		_putchar('-');

	if (n == -2147483648)
	{
		index = 1;
		n += 1;
	}
	n = -n;
	}
	while (int_len != 1)
	{
		if (n >= int_len)
			_putchar((n / int_len) % 10 + '0');
		int_len /= 10;
	}
	if (index == 1)
	{
		_putchar(((n % 10) + 1) + '0');
	}
	else
	{
		_putchar(n % 10 + '0');
	}
}
