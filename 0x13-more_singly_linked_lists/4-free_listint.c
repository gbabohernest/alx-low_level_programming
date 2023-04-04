#include "lists.h"

/**
* free_listint - Fress the memory occupied by the signly linked list
* @head: A pointer to the first node in the list
* Return: nothing (void)
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	if (head == NULL)
	{
		return;
	}

	while (temp != NULL)
	{
		head = temp;
		temp = temp->next;
		free(head);
	}
}
