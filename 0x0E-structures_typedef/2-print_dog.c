#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_dog - Prints a 'struct dog'
* @d: dog that is to be printed
* Return: nothing(void)
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if ((*d).name == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%s\n", (*d).name);
		}

		printf("Age: %f\n", (*d).age);
		printf("Owner: ");

		if ((*d).owner == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%s\n", (*d).owner);
		}
	}
}
