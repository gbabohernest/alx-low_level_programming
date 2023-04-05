#include "lists.h"

/**
* get_nodeint_at_index - Return th nth node of a linked list
*
* @head: Head pointer to the first node
* @index: Index of the node.
*
* Return: nth node, NULL if node does not exist.
*/


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tempNode;
	unsigned int i;

	tempNode = head;

	for (i = 0; tempNode != NULL; i++)
	{
		if (i == index)
		{
			return (tempNode);
		}
		tempNode = tempNode->next;
	}
	return (NULL);
}
