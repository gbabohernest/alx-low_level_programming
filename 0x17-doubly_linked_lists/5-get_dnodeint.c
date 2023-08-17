#include "lists.h"

/**
* get_dnodeint_at_index - Returns the nth node of a
*			dlistint_t linked list
* @head: a pointer to the head node
* @index: position of the node to be return
*
* Description: Index is the index of the node
*		starting from 0
*
* Return: the node, NULL if node does not exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp != NULL)
	{
		if (count == index)
		{
			return (tmp);
		}
		tmp = tmp->next;
		count++;
	}
	return (NULL);
}
