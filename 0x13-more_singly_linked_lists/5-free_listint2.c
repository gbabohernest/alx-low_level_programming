#include "lists.h"

/**
* free_listint2 - Frees a singly linked list from the memory
* @head: A pointer to the head node
* Description: Sets Head to NULL
* Return: nothing (void)
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;
	listint_t *ptr_next;
	int i;

	for (i = 0; tmp != NULL; i++)
	{
		ptr_next = tmp->next;
		free(tmp);
		tmp = ptr_next;
	}
	*head = NULL;
}
