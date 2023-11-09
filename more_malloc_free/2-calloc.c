#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - prints buffer in hexa
 * @nmemb: nmemb
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arzu;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arzu = malloc(sizeof(char) * nmemb * size);
	if (arzu == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		arzu[i] = 0;
	}
	return (arzu);
}
