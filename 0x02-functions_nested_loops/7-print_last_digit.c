#include "main.h"

/**
* print_last_digit - Function prints the last digit of a number.
*
*@num: Function parameter.
*
* Return: value of last digit
*/

int print_last_digit(int num)
{
	int result = num % 10;

	if (result < 0)
	{
		result = -(result);
	}

	_putchar(result + '0');
	return (result);
}
