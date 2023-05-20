#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes the node at index
* @head: a pointer to the head node
* @index: index of node to be deleted
* Return: 1 if success, -1 if failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t  *tmp_node;

	if (*head == NULL)
		return (-1);
	
	tmp_node = *head;

	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			(*head)->next->prev = NULL;
		}
		(*head) = (*head)->next;
		free(tmp_node);
		return (1);
	}

	while (i < index - 1)
	{
		tmp_node = tmp_node->next;
		i++;
	}
	if (tmp_node->prev != NULL)
		tmp_node->prev->next = tmp_node->next;
	if (tmp_node->next != NULL)
		tmp_node->next->prev = tmp_node->prev;
	free(tmp_node);
	return (1);
}
