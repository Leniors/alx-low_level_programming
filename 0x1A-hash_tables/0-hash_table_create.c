#include "hash_tables.h"

/**
 * hash_table_create - creates hash table array
 * @size: size of the array
 * Return: pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
		return (NULL);
	}

	ht->array = malloc(sizeof(hash_node_t) * size);

	if (ht->array == NULL)
	{
		return (NULL);
	}

	ht->size = size;

	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}


	return (ht);
}
