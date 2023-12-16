#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"


/**
 * hash_table_set - check the code
 * @ht: ht
 * @key: key
 * @value: value
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i, index;
	hash_node_t *new;

	if (!ht || !key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
