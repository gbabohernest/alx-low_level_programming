#include <stdio.h>
/**
* main - Prints all numbers of base 16.
*
* Return: 0 (Success)
*/
int main(void)
{
	int hexNum = '0';
	char hexChar = 'a';

	while (hexNum <= '9')
	{
		putchar(hexNum);
		hexNum++;
	}

	while (hexChar <= 'f')
	{
		putchar(hexChar);
		hexChar++;
	}

	putchar('\n');
	return (0);
}
