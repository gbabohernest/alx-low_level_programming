#include "main.h"

/**
* binary_to_uint - Converts a binary number
*		to an unsigned integer
* @b: A pointer to the string of binary values
* Return: Converted number | 0 if one or more in
*	string b is not 0 or 1
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int binary_value, count;

	count = 0;
	binary_value = 0;

	if (b == NULL)
		return (0);

	while (*(b + count) != '\0')
	{
		if (*(b + count) != '0' && *(b + count) != '1')
		{
			return (0);
		}

		binary_value <<= 1;

		if (*(b + count) == '1')
		{
			binary_value += 1;
		}
		count++;
	}
	return (binary_value);
}
