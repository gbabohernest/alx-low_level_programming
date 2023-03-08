#include "main.h"

int _prime_helper_fun(int n, int i);

/**
*is_prime_number - returns if a number is prime
*
*@n: the number to be checked
*
*Return: 1 if n is a prime number,
*	0 if not prime
*/


int is_prime_number(int n)
{
	return (_prime_helper_fun(n, 1));
}

/**
*_prime_helper_fun - a helper fun that checks
*		if number is a prime number
*
*@n:number to be checked
*@i:iteration
*
*Return: 1 for prime, 0 if not prime
*/


int _prime_helper_fun(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n % i == 0 && i > 1)
	{
		return (0);
	}

	if ((n / i) < i)
	{
		return (1);
	}

	return (_prime_helper_fun(n, i + 1));
}
