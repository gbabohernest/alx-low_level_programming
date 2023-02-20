#include <stdio.h>
/**
* main - Prints all the base 10 numbers.
*
* Return: 0 (Success)
*/
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
