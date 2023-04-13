#include "lists.h"

/**
* reverse_listint - Reverses a linked list
* @head: points to the first node in the list
* Return: A pointer to the first node in the
*	reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode, *currentNode;

	prevNode = NULL;
	currentNode = (*head);

	while (currentNode != NULL)
	{
		*head = currentNode->next;
		currentNode->next = prevNode;
		prevNode = currentNode;
		currentNode = (*head);
	}
	(*head)  = prevNode;
	return (*head);
}
