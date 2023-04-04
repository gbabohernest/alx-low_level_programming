#include "lists.h"

/**
* add_nodeint_end - Adds a new node at the end of a linked list
* @head: A pointer to the first node
* @n: Data to be given to the new node
* Return: Address of the new node
*	NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	return (*head);
}
