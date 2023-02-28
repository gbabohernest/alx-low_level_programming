#include "main.h"
#include <stdio.h>

/**
* print_array- prints n elements of an array of int
*
*@a: arg a of type int
*@n: num
*
* Return: nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
		printf("%d,", *a);

		}
		else
		{
			printf("%d", *a);
		}
		a++;
	}
	printf("\n");
}
