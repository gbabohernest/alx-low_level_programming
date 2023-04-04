#include "lists.h"

/**
* free_listint2 - Frees a singly linked list from the memory
* @head: A pointer to the head node
* Description: Sets Head to NULL
* Return: nothing (void)
*/

void free_listint2(listint_t **head)
{
	listint_t *temp, *temp2;

	temp = *head;

	if (head == NULL)
	{
		return;
	}
	while (temp != NULL)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
	*head = NULL;
}
