#include <stdlib.h>
#include "dog.h"

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
	struct dog *d;
	int i, j, k;
	char *dog_name, *dog_owner;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	dog_name = malloc(sizeof(char) * i + 1);
	if (dog_name == NULL)
	{
		free(d);
		return (NULL);
	}
	dog_owner = malloc(sizeof(char) * j + 1);
	if (dog_owner == NULL)
	{
		free(dog_name);
		free(d);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		dog_name[k] = name[k];
	for (k = 0; k <= j; k++)
		dog_owner[k] = owner[k];

	d->name = dog_name;
	d->age = age;
	d->owner = dog_owner;

	return (d);
}
