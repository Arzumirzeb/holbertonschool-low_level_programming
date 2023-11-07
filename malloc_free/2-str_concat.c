#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - check the code
 * @s1: s1
 * @s2: s2
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int size_1, size_2, size;
	char *result;
	int i;

	if (s1 == NULL)
	{
		size_1 = 0;
	}
	else
	{
		size_1 = strlen(s1);
	}
	if (s2 == NULL)
	{
		size_2 = 0;
	}
	else
	{
		size_2 = strlen(s2);
	}
	size = size_1 + size_2;
	result = malloc(sizeof(char) * size + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		if (i < size_1)
			result[i] = s1[i];
		else
			result[i] = s2[i - size_1];
	}
	result[i] = '\0';
	return (result);
}
