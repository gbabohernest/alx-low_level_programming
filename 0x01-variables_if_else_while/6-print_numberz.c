#include <stdio.h>
/**
* main - Prints all base 10 numbers.
*
* Return: 0 (Success)
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}
	putchar('\n');
	return (0);
}
