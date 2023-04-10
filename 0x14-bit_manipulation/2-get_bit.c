#include "main.h"

/**
* get_bit - Returns the value of a bit at a given index
*
* @n: number to be checked
* @index: index of the bit to checked
* Description - Index is the index, starting from
*		0 of the bit we want to get
*
* Return: Bit value at index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (n != 0)
	{
		bit_value = (n >> index) & 1;
		return (bit_value);
	}
	return (-1);
}
