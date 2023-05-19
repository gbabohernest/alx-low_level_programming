#include "lists.h"

/**
* create_newNode - creates a node
* @data: data to be added to the nodelist
* Return: newly created node
*/

dlistint_t *create_newNode(const int data)
{
	dlistint_t *newNode;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = data;
	newNode->prev = NULL;
	newNode->next = NULL;

	return (newNode);
}


/**
* add_dnodeint - Adds a new node at the beginning of
*		a dlistint_t list
* @head: a pointer to the head node
* @n: value to be added in the list
*
* Return: new element address
*	Null if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (head == NULL)
		return (NULL);

	newNode = create_newNode(n);
	if (newNode == NULL)
		return (NULL);

	if (*head != NULL)
		(*head)->prev = newNode;

	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
