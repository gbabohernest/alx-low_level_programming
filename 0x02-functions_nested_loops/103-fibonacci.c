#include <stdio.h>

/**
* main - prints the sum of even valued terms of
* fibonacci numbers
*
* Return: 0 (Success)
*/

int main(void)
{
	long int fib_num1, fib_num2, fib_num3, sum;

	fib_num2 = 1;
	fib_num1 = 0;
	fib_num3 = 0;
	sum = 0;

	while (fib_num3 < 4000000)
	{
		fib_num3 = fib_num1 + fib_num2;
		fib_num1 = fib_num2;
		fib_num2 = fib_num3;

		if (fib_num3 % 2 == 0)
		{
			sum += fib_num3;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
