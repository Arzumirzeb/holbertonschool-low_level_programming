#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - check the code
 * @dest: pointer
 * @src: pointer
 * @n: variable
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (;  *(src + i) != 0; i++)
	{
		if (i < n)
		{
			*(dest + i) = *(src + i);
		}
	}
	for (; i < n; i++)
	{
	*(dest + i) = 0;
	}
	return (dest);
}
