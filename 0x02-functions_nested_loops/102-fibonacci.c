#include <stdio.h>

/**
* main - prints the first 50 fibonacci numbers
* starting with 1 and 2
*
* Return: 0 (Success)
*/

int main(void)
{
	long int fib_num1 = 0;
	long int fib_num2 = 1;
	long int fib_num3;
	long int count = 1;

	while (count <= 50)
	{
		fib_num3 = fib_num2 + fib_num1;
		count++;
		printf("%ld", fib_num3);

		if (count <= 50)
		{
			printf(", ");
			fib_num1 = fib_num2;
			fib_num2 = fib_num3;
		}
	}
	printf("\n");
	return (0);
}
