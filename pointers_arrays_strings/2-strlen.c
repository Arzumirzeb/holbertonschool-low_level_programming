#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _strlen - entry point
 * @s: pointer
 * Return: Always 0.
 */
int _strlen(char *s)
{
	char l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
