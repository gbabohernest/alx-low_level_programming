#include <stdio.h>
/*
* main - prints the alphabet in lowercase.
*
* Return: 0 (Success)
*/
int main(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		putchar(character);
		character++;
	}
	putchar('\n');
	return (0);
}
