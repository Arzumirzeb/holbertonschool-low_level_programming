#include "main.h"
#include <stdio.h>

/**
 * *cap_string - check the code
 * @a: pointer
 * Return: Always 0.
 */
char *cap_string(char *a)
{
	int i;
	char *b;

	for (i = 0; *(a + i) != 0; i++)
	{
		b = (a + i - 1);
		if (*(a + i) >= 97 && *(a + i) <= 122)
		{
			if (*b == ' ' || *b == '\t' || *b == '\n' || *b == ',' || *b == ';')
				*(a + i) = *(a + i) - 97 + 65;
			if (*b == '!' || *b == '?' || *b == '(' || *b == ')' || *b == '{')
				*(a + i) = *(a + i) - 97 + 65;
			if (*b == '"' || i == 0 || *b == '.' || *b == '}')
				*(a + i) = *(a + i) - 97 + 65;
		}
	}
	return (a);
}
