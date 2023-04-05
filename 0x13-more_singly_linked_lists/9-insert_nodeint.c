#include "lists.h"

/**
* insert_nodeint_at_index - Insert a new node at a given position
* @head: A pointer to the head node
* @idx: Index at which node is to be inserted
* @n: Data of the node
* Return: Address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;

	listint_t *temp_node_ptr;
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));
	
	temp_node_ptr = (*head);
	newNode->n = n;

	if ((*head) == NULL)
	{
		return (NULL);
	}
	
	for (; count < idx - 1; count++)
	{
		temp_node_ptr = temp_node_ptr->next;
	}
	newNode->next = temp_node_ptr->next;
	temp_node_ptr->next = newNode;
	return (newNode);
}
