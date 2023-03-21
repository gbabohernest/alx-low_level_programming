#include <stdlib.h>
#include "dog.h"

/**
* _strlen - calculate the length of a string
*
* @s: string arg to be evaluated
*
* Description:	calculates the length of the string pointed to by s,
*		excluding the terminating null byte ('\0').
*
* Return: string length in bytes
*/

int _strlen(char *s)
{
	int counter;

	while (s[counter] != '\0')
	{
		counter++;
	}

	return (counter);
}

/**
* *_strcpy - copy a string
*
* @dest: a pointer to the copied string
* @src: source string / string to be copied
*
* Description: copies the string pointed to by src, including the
*	terminating null byte ('\0'), to the buffer  pointed to  by  dest.
*
* Return: return a pointer to the dest
*/

char *_strcpy(char *dest, char *src)
{
	int str_len, counter;

	str_len = 0;

	while (src[str_len] != '\0')
	{
		str_len++;
	}

	for (counter = 0; counter < str_len; counter++)
	{
		dest[counter] = src[counter];
	}
	dest[counter] = '\0';
	return (dest);
}

/**
* new_dog - Create a new dog
*
*@name: char string dog's name
*@age: int age, dog's age
*@owner: char string owner of the dog
*
*Return: NULL if function fails
*	 Else a pointer to new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int dog_name_len, owner_name_len;

	dog_name_len = _strlen(name);
	owner_name_len = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (dog_name_len + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (owner_name_len + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
