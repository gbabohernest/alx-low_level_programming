#include <stdio.h>
/**
* main - Prints all possible combinations of a single number.
*
* Return: 0 (Success)
*/
int main(void)
{
	int number = '0';

	while (number <= '9')
	{
		putchar(number);
		if (number != '9')
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');
	return (0);
}
