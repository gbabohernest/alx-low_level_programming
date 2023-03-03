#include "main.h"

/**
* reverse_array - a function  reverses the
* content of an array of intergers
*
*@a:pointer that pointer to an int variable
*@n:num of elements in the array
*
* Return: nothing(void)
*/

void reverse_array(int *a, int n)
{
	int count = 0, temp_arr;

	count = 0;
	temp_arr = 0;
	n -= 1;
	while (count < n)
	{
		temp_arr = a[n];
		a[n--] = a[count];
		a[count++] = temp_arr;
	}
}
