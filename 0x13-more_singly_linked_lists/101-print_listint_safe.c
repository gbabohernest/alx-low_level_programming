#include "lists.h"

/**
* print_listint_safe - Prints a listint_t linked list
* @head: first node in the list
*
* Return: number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_node, *tmp2_node;
	size_t i;

	tmp_node = head;

	if (tmp_node == NULL)
		exit(98);

	for (i = 0; tmp_node != NULL; i++)
	{
		printf("[%p] %d\n", (void *) tmp_node, tmp_node->n);
		tmp2_node = tmp_node;
		tmp_node = tmp_node->next;

		if (tmp2_node <= tmp_node)
		{
			printf("-> [%p] %d\n", (void *) tmp_node, tmp_node->n);
			exit(98);
		}
	}
	return (i);
}
