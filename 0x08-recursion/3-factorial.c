#include "main.h"

/**
* factorial - finds the factorial of a  given number
*@n: number
*Return: the facotrial of a number
*/

int factorial(int n)
{
	int f;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		f = n * factorial(n - 1);
	}
	return (f);
}
