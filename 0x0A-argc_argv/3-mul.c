#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* main - Multiplies two numbers.
* Description: 	the program should print the result of the
*		multiplication, followed by a newline.
*	  	You can assume that two numbers & result of the
*		multiplicatioon can be stored in an integer.
*		If the program does not receive two arguments,
*		the program should print ERROR, followed by a new line,
*		and return 1
*
* Return: 0 (success)
*/


int main(int argc, char *argv[])
{
	int i, product;

	product = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	
	for (i = 1; i < argc; i++)
	{
		product = product * atoi(argv[i]);
	}
	printf("%d\n", product);
	return (0);
}
