#include "lists.h"

/**
* free_dlistint - Frees a dlistint_t list
* @head: a pointer to the head node
* Return: nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;

	tmp = head;

	while (tmp !=NULL)
	{
		head = tmp->next;
		free(tmp);
		tmp = head;
	}
}
