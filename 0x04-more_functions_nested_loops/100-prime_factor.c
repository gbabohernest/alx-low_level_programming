#include <stdio.h>
#include <math.h>

/**
* main - function that find and print the largest prime factor of 612852475143
*Return: 0 (Success)
*/

int main(void)
{
	long int number;
	long int max;
	long int count;

	number = 612852475143;

	while (number % 2 == 0)
	{
		max = 2;
		number = number / 2;
	}

	for (count = 3; count <= sqrt(number); count = count + 2)
	{
		while (number % count == 0)
		{
			max = count;
			number = number / count;
		}
	}
	if (number > 2)
	{
		max = number;
	}
	printf("%ld\n", max);
	return (0);
}
