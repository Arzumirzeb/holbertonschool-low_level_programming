#include "main.h"
#include <stdio.h>

/**
 * *leet - check the code for
 * @a: char
 * Return: Always 0.
 */
char *leet(char *a)
{
	int i = 0, j = 0;
	char num[] = "43071";
	char b[] = "aeotl";
	char B[] = "AEOTL";

	for (; *(a + i) != 0; i++)
	{
		for (; j < 5; j++)
		{
			if (*(a + i) == *(b + j) || *(a + i) == *(B + i))
			{
				*(a + i) = *(num + j);
			}
		}
	}
	return (a);

}
