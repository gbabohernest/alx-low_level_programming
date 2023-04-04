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
	listint_t *t = *head;
	listint_t *tmp_next;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	for (i = 0; t != NULL; i++)
	{
		tmp_next = t->next;
		free(t);
		t = tmp_next;
	}
	*head = NULL;
}
