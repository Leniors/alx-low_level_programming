#include "hash_tables.h"

/**
 * hash_table_get - gets value of a key
 * @ht: array pointer
 * @key: key
 * Return: char pointer
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *) key, ht->size);
	hash_node_t *temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}
