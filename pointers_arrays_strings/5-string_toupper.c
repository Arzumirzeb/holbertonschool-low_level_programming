#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - check the code
 * @a: pointer
 * Return: char
 */
char *string_toupper(char *a)
{
	int i = 0;

	for (; *(a + i) != 0 ; i++)
	{
		if (*(a + i) >= 97 && *(a + i) <= 122)
		{
			*(a + i) = *(a + i) - 97 + 65;
		}
	}
	return (a);
}
