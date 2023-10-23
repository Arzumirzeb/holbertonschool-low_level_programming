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
	char *l = s;

	while (*l != '\0')
	{
		l++;
	}
	return (l - s);
}
