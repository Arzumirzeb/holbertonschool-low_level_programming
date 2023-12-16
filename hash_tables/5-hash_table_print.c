#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print- check the code
 * @ht: ht
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *temp;
	char *v = "";

	if (!ht)
		return;
	putchar('{');
	while (index < ht->size)
	{
		temp = ht->array[index];
		while (temp)
		{
			printf("%s'%s': '%s'", v, temp->key, temp->value);
			v = ", ";
			temp = temp->next;
		}
		index++;
	}
	puts("}");
}
