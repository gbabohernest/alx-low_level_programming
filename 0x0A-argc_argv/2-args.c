#include "main.h"
#include <stdio.h>

/**
* main - Prints all arguments it receives.
*
* Description: all arguments should be printed, including the first one.
*	       Print only one argument per line, ending with a new line
*
* @argc: number of arguments given to the program
 *@argv: an array of pointers to the arguments
*
* Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
