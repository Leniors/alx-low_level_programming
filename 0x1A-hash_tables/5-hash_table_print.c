#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;

		if (comma == 1)
			printf(", ");

		temp = ht->array[i];

		while (temp != NULL)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			if (temp != NULL)
				printf(", ");
		}
		comma = 1;
	}
	printf("}\n");
}
