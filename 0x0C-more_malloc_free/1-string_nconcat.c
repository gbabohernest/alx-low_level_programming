#include "main.h"
#include <stdlib.h>

/**
* _strlen - find length of string
* @str: string
* Return: length of string
*/

int _strlen(char *str)
{
	int i;
	int len = 0;

	for (i = 0; str[i]; i++)
	{
		len++;
	}
	return (len);
}

/**
* string_nconcat - concatenates two strings
* Description:	If the function fails, it should return NULL
*		If n is greater or equal to the length of s2 then use the entire string s2
*		if NULL is passed, treat it as an empty string
*
* @s1: destination string
* @s2: source string
* @n: number of bytes to be copied from s2
*
* Return: a pointer to the newly allocated space in memory, which contains
*	s1, followed by the first n bytes of s2, and null terminated.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	int i, j;
	int str1_len, num;

	num = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (num < 0)
	{
		return (NULL);
	}
	if (num >= _strlen(s2))
	{
		num = _strlen(s2);
	}
	str1_len = (unsigned int) _strlen(s1);
	concat_str = malloc((str1_len + num + 1) * sizeof(char));

	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		concat_str[i] = s1[i];
	}
	for (j = 0; j < num; j++)
	{
		concat_str[i + j] = s2[j];
	}
	concat_str[i + j] = '\0';
	return (concat_str);
}
