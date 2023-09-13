#include "hash_tables.h"

/**
* hash_table_set - Adds an element to the hash table.
*
* @ht: Hash table you want to add or update the key/value to
* @key: Is the Key. Key cannot be an empty string.
* @value: Value associated with the key. Can be an emtpy string
*
* Return: 1 for success, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	int is_key_exits;
	hash_node_t *current_node, *new_node;

	if ((ht == NULL) || (key == NULL) || (key[0] == '\0'))
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	current_node = ht->array[index];

	is_key_exits = key_exits(current_node, key, value);

	if (is_key_exits == 1)
		return (1);
	/* key doesn't exits, add a new node */
	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	/* add new node at beginning of the LL */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

/**
* key_exits - Checks if a given key exits in the hash table
* @current_node: A pointer to the current index
* @key: the key
* @value: the value associated with the key
* Return: 1 if successful, 0 otherwise
*/
int key_exits(hash_node_t *current_node, const char *key, const char *value)
{
	while (current_node != NULL)
	{
		if (strcmp(key, current_node->key) == 0)
		{	char *new_value = strdup(value);

			if (new_value == NULL)
			return (0);

			free(current_node->value);
			current_node->value = new_value;
			return (1);
		}

		current_node = current_node->next;
	}
	return (0);
}
