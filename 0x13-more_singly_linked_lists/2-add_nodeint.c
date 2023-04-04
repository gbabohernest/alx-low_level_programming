#include "lists.h"

/**
* add_nodeint - Adds a new node at the
*		beginning of a linked list
* @head: A pointer to the first node
* @n: Value given to the new nodei
* Return: Return an address to the new element
*	 NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = (*head);
		(*head)  = new_node;
	}
	return (*head);
}
