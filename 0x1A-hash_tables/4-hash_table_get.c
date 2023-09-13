#include "hash_tables.h"

/**
* hash_table_get - Retrieves a value associated with a key
*
* @ht: hash table you want to look into
* @key: key you are looking for
*
* Return: Value associted with the key
*         NULL if key couldn't be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;
	char *retrived_value;

	if ((ht == NULL) || (key == NULL) || (key[0] == '\0'))
		return (NULL);

	/*get the hash code*/
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
		{
			/*found the matching key*/
			retrived_value = node->value;
			return (retrived_value);
		}
		node = node->next;
	}
	retrived_value = NULL;
	return (retrived_value);
}
