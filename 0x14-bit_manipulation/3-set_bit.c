#include "main.h"

/**
* set_bit - Sets the value of a bit to 1 at a given index
*
* @n: Address of bit we want to set
* @index: Index of bit we want to set
*
* Description - index is the index, starting
*		from 0 of the bit we want to set
* Return: 1 if it worked, or -1 if an error occured
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_value;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	if (n != 0)
	{
		bit_value = (1 << index);
		*n |= bit_value;
	}
	return (1);
}
