#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - check the code
 * @dest: pointer
 * @src: pointer
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; *(src + i) != 0; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = 0;
	return (dest);
}
