#include "main.h"
#include <stdio.h>

/**
 * *_strcat - check the code
 * @dest: pointer
 * @src: pointer
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	for (; *(dest + j) != 0; j++)
	{
	}
	for (; *(src + i) != 0; i++, j++)
	{
		*(dest + j) = *(src + i);
	}
	*(dest + j) = 0;
	return (dest);
}
