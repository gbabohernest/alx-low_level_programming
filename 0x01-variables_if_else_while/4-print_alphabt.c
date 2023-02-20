#include <stdio.h>
/**
* main - prints all the alphabet in lowercase, expect q and e.
*
* Return: 0 (Success)
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
