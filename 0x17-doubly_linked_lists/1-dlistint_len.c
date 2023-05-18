#include "lists.h"

/**
* dlistint_len - Return the number of elements in
*		a linked dlistint_t list
* @h: pointer to the head node
* Return: total number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t total_nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		total_nodes++;
	}
	return (total_nodes);
}
