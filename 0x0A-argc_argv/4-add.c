#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - Adds positive numbers.
*
* Description:	print the result, followed by a newline.
*		if no number is passed, print 0, followd by a newline
*		if numbers are not digit, print Error, and return 1
*		Assume that numbers and the addition of all numbers can be
*		stored in an int.
*
* @argc:the number of arguments given to the program
* @argv: an array of pointers to the arguments
*
* Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("%s\n", "Error");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
