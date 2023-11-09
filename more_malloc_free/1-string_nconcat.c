#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - check the code
 * @s1: s1
 * @s2: s2
 * @n: n
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int size1, size2, size, i;

	if (s1 == NULL)
		size1 = 0;
	else
		size1 = strlen(s1);
	if (s2 == NULL)
		size2 = 0;
	else
		size2 = strlen(s2);
	if (n >= size2)
		n = size2;
	size = size1 + n;
	result = malloc(size + 1);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		if (i < size1)
			result[i] = s1[i];
		else
		result[i] = s2[i - size1];
	}
	result[i] = '\0';
	return (result);
}
