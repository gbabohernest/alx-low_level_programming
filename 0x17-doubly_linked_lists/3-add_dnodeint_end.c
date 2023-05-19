#include "lists.h"

/**
* createNode - creates a new node
* @n: data to be inserted in the node
* Return: new node
*/

dlistint_t *createNode(const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}

/**
* add_dnodeint_end - adds a new node at the end
*		of a dlistint_t list
* @head: a pointer to the head node
* @n: data given to the new node
*
* Return: address of new node, NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *tail_node;

	if (head == NULL)
		return (NULL);

	node = createNode(n);

	if (node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	tail_node = *head;

	while (tail_node->next != NULL)
	{
		tail_node = tail_node->next;
	}
	tail_node->next = node;
	node->prev = tail_node;
	return (node);
}
