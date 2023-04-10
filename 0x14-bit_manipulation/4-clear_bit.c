#include "main.h"

/**
* clear_bit - Sets the value of a bit to 0 at a given index
* @n: Adress of the bit to set
* @index: Index of the bit the set
*
* Return: 1 if it worked, -1 if an error occured
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	if (n != 0)
	{
		bit = (1 << index);
		*n &= ~bit;
	}
	return (1);
}
