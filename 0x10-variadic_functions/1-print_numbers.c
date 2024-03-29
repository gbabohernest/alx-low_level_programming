#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - Prints numbers, followed by a newline
* @separator: string arg
* @n: integers arg
*
* Description: separator is the string to be printed between numbers.
*		n is the number of integers passed to the function
*	if separator is NULL, don't print
*
* Return: nothing (void)
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
