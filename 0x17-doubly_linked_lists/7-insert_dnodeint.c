#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at a given position
*
* @h: a pointer to the head node
* @idx: index where node to be added
* @n: data to be given to the list
*
* Return: address of new node or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new_node;
	unsigned int i = 0;

	if (h == NULL || (*h == NULL && idx != 0))
		return (NULL);
	new_node = create_newNode(n);
	if (new_node == NULL)
		return (NULL);
	tmp = *h;
	if (idx == 0 && (*h) == NULL)
	{
		(*h) = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = tmp;
		tmp->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (tmp->next != NULL)
	{
		if (i == idx - 1)
		{
			new_node->prev = tmp;
			new_node->next = tmp->next;

			if (tmp->next != NULL)
				tmp->next->prev = new_node;
			tmp->next = new_node;
			return (new_node);
		}
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (NULL);
	free(new_node);
	return (new_node);
}
