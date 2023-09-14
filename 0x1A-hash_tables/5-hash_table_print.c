#include "hash_tables.h"

/**
* hash_table_print - Prints a hash table
* @ht: is the hash table
* Return: nothing(void)
*/

void hash_table_print(const hash_table_t *ht)
{
	int first;
	hash_node_t *node;
	unsigned long int i;

	if (ht == NULL)
		return;

	first = 0;
	i = 0;
	printf("{");
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (first == 0)
				first = 1;
			else
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
		i++;
	}
	printf("}\n");
}
