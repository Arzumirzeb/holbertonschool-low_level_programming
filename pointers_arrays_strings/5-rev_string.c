#include "main.h"
#include <stdio.h>

/**
 * rev_string - check the code
 * @s: pointer
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int tmp;
	int a, len, len1;

	for (len = 0; s[len] != '\0'; len++)
	len1 = len - 1;
	for (a = 0; a < len / 2; a++)
	{
		tmp = s[a];
		s[a] = s[len1];
		s[len1--] = tmp;
	}
}
