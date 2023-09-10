#include "hash_tables.h"

/*
* hash_table_create - Creates a hash table.
* @size: size of the array
* Return: A pointer to the newly created hash table
*	  NULL if failure
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_table_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		/*sets each slot in the array to NULL*/
		table->array[i] = NULL;
	}

	return (table);
}
