#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - check the code
 * @s: char
 * @accept: char
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int  j;

	while (*s)
	{
		for (j = 0; *(accept + j) != 0; j++)
		{
			if (*s == *(accept + j))
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
