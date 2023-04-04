#include "lists.h"

/**
* free_listint2 - Frees a singly linked list
* @head: A pointer to the head node
* Description: Sets Head to NULL
* Return: nothing (void)
*/

void free_listint2(listint_t **head)
{
	int i;
	listint_t *t;

	if (head == NULL)
	{
		return;
	}
	for (i = 0; (*head)->next != NULL; i++)
	{
		t = (*head)->next;
		free(*head);
		*head = t;
	}
	*head = NULL;
}
