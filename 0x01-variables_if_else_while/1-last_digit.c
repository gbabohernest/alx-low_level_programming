#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if the last digit of a random number is
 * greater than or less than 5, or is zero..
 *
 * Return: 0 on success
*/
int main(void)
{
	int n;
	int result;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	result = n % 10;
	if (result > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, result);
	}
	else if (result < 6 && result != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, result);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, result);
	}

	return (0);
}