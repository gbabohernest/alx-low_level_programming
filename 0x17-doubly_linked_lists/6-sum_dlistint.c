#include "lists.h"

/**
* sum_dlistint - Returns the sum of all data
*		of a dlistint_t linked list
* @head: a pointer to the head node
* Return: sum of all data in the list
*/

int sum_dlistint(dlistint_t *head)
{
	int sum, i = 0;
	dlistint_t *tmp;

	if (head == NULL)
		return (0);
	sum = 0;
	tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
		i++;
	}
	return (sum);
}
