#include "hash_tables.h"

/**
 * hash_table_set - sets values of a hash table
 * @ht: pointer to the array
 * @key: key of the node
 * @value: value of the node
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp = malloc(sizeof(hash_node_t));
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (temp == NULL || key == NULL)
	{
		return (0);
	}

	temp->key = strdup(key);
	if (value == NULL)
		value = NULL;
	temp->value = strdup(value);
	temp->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = temp;
	}
	else
	{
		temp->next = ht->array[index];
		ht->array[index] = temp;
	}

	return (1);
}
