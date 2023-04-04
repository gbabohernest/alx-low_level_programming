#include  "lists.h"

/**
* pop_listint - Deletes the head node of a linked list
* @head: Pointer to the first node in the list
* Return:Head node data or 0 if list is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *node_t;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	node_t = *head;
	*head = (*head)->next;
	n = node_t->n;
	free(node_t);
	return (n);
}
