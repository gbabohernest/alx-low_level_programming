#include "main.h"
#include "stdlib.h"

/**
* str_concat - concatenates two strings
*
*@s1: string to concatenate
@s2: string to concatenate
*
*Return: NULL on failure
*	a pointer to a newly allocated space in
*	memory which contains s1 and s2 values
*
*/
char *str_concat(char *s1, char *s2)
{
	char *concate_str;
	int i, j, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	concate_str  = (char *) malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (concate_str == NULL)
		return (NULL);

	for (c = 0, d = 0; c < (i + j + 1); c++)
	{
		if (c < i)
			concate_str[c] = s1[c];
		else
			concate_str[c] = s2[d++];
	}

	return (concate_str);
}
