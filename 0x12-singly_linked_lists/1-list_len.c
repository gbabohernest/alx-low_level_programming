#include "lists.h"

/**
* list_len - Return number of elements in a linked list
* @h: a pointer to the head node
* Return: total number of elements
*/

size_t list_len(const list_t *h)
{
	size_t  count;

	count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
