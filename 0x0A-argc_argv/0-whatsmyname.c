#include "main.h"
#include <stdio.h>

/**
* main - Prints the name of the program, followed by a new line
*
*@argc:number of arguments supplied to the program
*@argv:an array of pointers to the arguments.
*
*Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
