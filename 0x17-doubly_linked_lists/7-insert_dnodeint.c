#include "lists.h"

/**
* list_len - calculaltes length of a list
* @h: a pointer to the first node
* Return: length of the list
*/

unsigned int list_len(dlistint_t **h)
{
	unsigned int len = 0;
	dlistint_t *tmp = *h;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		len++;
	}
	return (len);
}

/**
* insert_dnodeint_at_index - Inserts a new node at a given position
*
* @h: a pointer to the head node
* @idx: index where node to be added
* @n: data to be given to the list
*
* Return: new node address or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new_node;
	unsigned int i = 0;
	unsigned int length = list_len(h);

	tmp = *h;

	if (idx > length)
	{
		return (NULL);
	}
	else if (idx == 0)
	{
		add_dnodeint(h, n);
	}
	else
	{
		new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		while (i < idx - 1)
		{
			tmp = tmp->next;
			i++;
		}
		new_node->prev = tmp;
		new_node->next = tmp->next;
		tmp->next = new_node;
		new_node->next->prev = new_node;
		return (new_node);
	}
	return (NULL);
}
