#include "lists.h"

/**
* print_listint_safe - Prints a listint_t linked list
* @head: first node in the list
*
* Return: number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *tmp1 = head, *tmp2;
	
	if (head == NULL)
		exit(98);

	while (tmp1)
	{
		printf("[%p] %d\n", (void *) tmp1, tmp1->n);
		i++;
		tmp2 = tmp1;
		tmp1 = tmp1->next;

		if (tmp2 <= tmp1)
		{
			printf("-> [%p] %d\n", (void *) tmp1, tmp1->n);
			exit(98);
		}
	}
	return (i);
}
