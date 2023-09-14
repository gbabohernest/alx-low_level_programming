#include "hash_tables.h"

/**
* hash_table_delete - Deletes a hash table
* @ht: is the hash table
* Return: nothing(void)
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp_node;

	if (ht == NULL)
		return;

	i = 0;
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			tmp_node = node->next;

			free(node->key);
			free(node->value);
			free(node);
			node = tmp_node;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
