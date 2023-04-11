#include "main.h"

/**
* get_endianness - Checks the endianness
* Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	unsigned int i = 1;
	char *ptr = (char *)&i;

	if (*ptr)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
