#include "main.h"
/**
* print_line - function that draws a straight line in the terminal.
*@n: integer parameter
*Result: 0 (Success)
*/

void print_line(int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
