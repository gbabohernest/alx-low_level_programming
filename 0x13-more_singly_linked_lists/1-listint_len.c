#include "lists.h"

/**
* listint_len - Return the numbers of elements
*		in a linked list
* @h: A pointer to the head node
* Return: Total numbers of node
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
