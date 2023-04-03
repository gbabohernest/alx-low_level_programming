#include "lists.h"
#include <stdio.h>

/**
* print_listint - Prints all the elements of a linked list
* @h: Pointer to the head node
* Return: Number of nodes
*/

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count = count + 1;
	}
	return (count);
}
