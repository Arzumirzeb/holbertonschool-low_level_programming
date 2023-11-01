#include "main.h"
#include <stdio.h>

/**
 * *_strchr - check the code
 * @s: pointer
 * @c: variable
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
	}
	for (j = 0; j <= i; j++)
		if (s[j] == c)
		{
			s += j;
			return (s);
		}
	return (NULL);
}
