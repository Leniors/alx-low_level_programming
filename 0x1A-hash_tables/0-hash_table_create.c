#include "hash_tables.h"

/**
 * hash_table_t - creates hash table array
 * @size: size of the array
 * Return: pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t));

	return (ht);
}
