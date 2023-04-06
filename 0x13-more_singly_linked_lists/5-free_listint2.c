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
	listint_t *tmpNode;
	listint_t *tmp_next;

	if (head == NULL)
	{
		return;
	}
	tmpNode = (*head);
	for (i = 0; tmpNode != NULL; i++)
	{
		tmp_next = tmpNode;
		tmpNode = tmpNode->next;
		free(tmp_next);
	}
	*head = NULL;
}
