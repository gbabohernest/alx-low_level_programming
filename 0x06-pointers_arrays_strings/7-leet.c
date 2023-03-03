#include "main.h"

/**
* leet - encodes a string into 1337
*
*@str: string to be encoded
*
*Return: an encoded string
*/

char *leet(char *str)
{
	int i, j;
	char letter_keys[50] = "aAeEoOtTlL";
	char num_keys[50] = "43071";

	for (i = 0; str[i] != '\0'; ++i)
	{
		for (j = 0; letter_keys[j] != '\n'; j++)
		{
			if (str[i] == letter_keys[j])
			{
				str[i] = num_keys[j / 2];
			}
		}
	}
	return (str);
}

