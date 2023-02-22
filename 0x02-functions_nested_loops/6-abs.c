#include "main.h"
#include <stdio.h>
/**
 * _abs - a function that computes the absolute value of an integer
 * @ab: integer input
 * Return: absolute value of ab
 */
int _abs(int ab)
{
	if (ab < 0)
	{
		ab = -(ab);
	}
	else if (ab >= 0)
	{
		ab = ab;
	}
	return (ab);
}
