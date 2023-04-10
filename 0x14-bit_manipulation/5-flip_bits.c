#include "main.h"

/**
* flip_bits - Flip bit from one number to another
* @n: first number to be flipped
* @m: second number to be flipped
*
* Return: Number of bits you would need to flip (success)
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_diff, i;

	bit_diff = n ^ m;
	i = 0;

	while (bit_diff)
	{
		if ((bit_diff & 1) == 1)
		{
			i++;
		}
		bit_diff >>= 1;
	}
	return (i);
}
