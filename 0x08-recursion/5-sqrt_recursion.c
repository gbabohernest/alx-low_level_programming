#include "main.h"

int _sqrt_helper_fun(int n, int i);

/**
*_sqrt_recursion - Returns the natural square root of a number
* @n: number to calculate the natural square root
*
* Return: the natural square root
*/

int _sqrt_recursion(int n)
{
	return (_sqrt_helper_fun(n, 1));
}

/**
* _sqrt_helper_fun - is a helper function that calculates
*		natural square root
*@n: number to calculate the square root
*@i: iterate number
*
* Return: the natural square root
*/

int _sqrt_helper_fun(int n, int i)
{
	if (n == i * i)
	{
		return (i);
	}
	else if (i < n)
	{
		return (_sqrt_helper_fun(n, ++i));
	}
	else
	{
		return (-1);
	}
}
