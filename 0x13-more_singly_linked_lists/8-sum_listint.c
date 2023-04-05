#include "lists.h"

/**
* sum_listint - Return the sum of all data(n) of a linked list
* @head: A pointer to the first node in the list
* Return: Total amount of data, 0 if list is empty
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tempNode;

	tempNode = head;
	if (tempNode == NULL)
	{
		return (0);
	}

	while (tempNode != NULL)
	{
		sum += tempNode->n;
		tempNode = tempNode->next;
	}
	return (sum);
}
