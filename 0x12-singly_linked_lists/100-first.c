#include "lists.h"
#include <stdio.h>

/**
* print_before_main - Prints a string before main
*		function is executed
* Return: 0 (success)
*/

__attribute__((constructor))int print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
	return (0);
}
