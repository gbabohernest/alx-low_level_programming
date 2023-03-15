#include "main.h"
#include <stdio.h>

/**
* main - Prints the number of arguments passed into it.
*
* Description: Program should print a number, followed by
*		a newline
*
*@argc: number of arguments given to the program
*@argv: an array of pointers to the arguments.
*
*Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
