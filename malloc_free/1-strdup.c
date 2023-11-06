#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - prints buffer in hexa
 * @str: str
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	char *arr;
	int i;
	int size;

	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str);
	arr = (char *) malloc(sizeof(char) * (size + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';
	return (arr);
}
