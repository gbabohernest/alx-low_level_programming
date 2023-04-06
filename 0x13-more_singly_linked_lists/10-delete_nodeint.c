#include "lists.h"

/**
* delete_nodeint_at_index - Deletes the node at a specific index
* @head: A pointer to the head node
* @index: Index at which deletion is going to happend
* Return: 1 if succeeded, -1 if failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmpNode =  *head;
	listint_t *deleteNode;

	unsigned int count = 0;

	if ((*head) == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		(*head) = tmpNode->next;
		free(tmpNode);
		return (1);
	}
	while (tmpNode != NULL  && count < index - 1)
	{
		tmpNode = tmpNode->next;
		count++;
	}
	if (tmpNode == NULL)
	{
		return (-1);
	}
	deleteNode = tmpNode->next;
	tmpNode->next = deleteNode->next;
	free(deleteNode);
	return (1);
}
