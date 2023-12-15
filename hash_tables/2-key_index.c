#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * int key_index - check the code
 * @key: key
 * @size: size
 * Return: Always EXIT_SUCCESS.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb(key) % size);
}
