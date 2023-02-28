#include "main.h"

/**
* rev_string- function that reverses a string
*@s: characters string argument
* Return: nothing
*/

void rev_string(char *s)
{
	int i, j;
	char str[1000];

	i = 0;

	while (*(s + i) != 0)
	{
		str[i] = *(s + i);
		i++;
	}

	j = i - 1;
	i = 0;

	while (j >= 0)
	{
		*(s + j) = str[i];
		j--;
		i++;
	}
}
