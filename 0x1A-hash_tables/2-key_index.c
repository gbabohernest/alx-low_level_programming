#include "hash_tables.h"

/**
* key_index - Gives the index of a key
* @key: is the key for which an index to be found
* @size: size of the array of hash table
* Return: index at which key/value pair should
*	  be stored in the array
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int hash;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
