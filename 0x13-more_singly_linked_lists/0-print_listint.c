#include "lists.h"
#include <stdio.h>

/**
* print_listint - Prints all the elements of a linked list
* @h: Pointer to the first node in the list
* Return: Number of node in the list
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count = count + 1;
	}
	return (count);
}
