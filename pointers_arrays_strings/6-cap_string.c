#include "main.h"
#include <stdio.h>

/**
 * *cap_string - check the code
 * @a: pointer
 * Return: Always 0.
 */
char *cap_string(char *a)
{
	int i = 0;
	char b = *(a + i - 1);

	for (; *(a + i) != 0; i++)
	{
		if (*(a + i) >= 97 && *(a + i) <= 122)
		{
		if (b == ' ' || b == '\t' || b == '\n' || b == ',')
			*(a + i) = *(a + i) - 97 + 65;
		if (b == ';' || b == '.' || b == '!' || b == '?')
			*(a + i) = *(a + i) - 97 + 65;
		if (b == '"' || b == '(' || b == ')' || b == '{' || b == '}')
			*(a + i) = *(a + i) - 97 + 65;
		}
	}
	return (a);
}
