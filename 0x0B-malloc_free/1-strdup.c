#include "main.h"
#include "stdlib.h"

/**
* _strdup - returns a pointers to a newly- allocated space in memory,
*	which contains a copy of the string given as a parameter.
*
*@str: string to be duplicated / copied
*
*Return: a pointer to the duplicated string
*	NULL if insufficient
*/


char *_strdup(char *str)
{
	char *dupPtr;
	int str_len, i;

	str_len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		str_len++;
	}

	dupPtr = (char *) malloc((str_len + 1) * sizeof(char));

	if (dupPtr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		dupPtr[i] = str[i];
	}

	dupPtr[str_len] = '\0';
	return (dupPtr);
}
