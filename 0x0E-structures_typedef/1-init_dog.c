#include "dog.h"
#include <stdlib.h>
/**
* init_dog - initialize a variable of type 'struct dog'
*
*@d: struct dog
*@name: name of the dog
*@age: age of the dog
*@owner: string for owner's name
*
* Return: nothing(void)
*
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

