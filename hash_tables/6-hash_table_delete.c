#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print- check the code
 * @ht: ht
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp;

	if (!ht)
		return;
	for (; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp)
			{
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = temp->next;
			}
		}
	}
	free(ht->array);
	free(ht);
}
