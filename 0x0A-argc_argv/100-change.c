#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints the minimum number of coins to make
*	change for an amount of money.
*
*@argc: number of arguments given to the program
*@argv: an array of pointers to the arguments
*
*Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	cents = atoi(argv[1]);
	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents = cents - 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents = cents - 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents = cents - 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents = cents - 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}
