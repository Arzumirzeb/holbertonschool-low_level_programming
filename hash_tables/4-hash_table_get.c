#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - check the code
 * @ht: ht
 * @key: key
 * Return: Always EXIT_SUCCESS.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	while (ht->array[index] && !strcmp(ht->array[index]->key, key))
	{	return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
