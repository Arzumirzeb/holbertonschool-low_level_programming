#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - check the code
 * @b: char
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		else if (b[i] == '1')
		{
			a = (a << 1) | 1;
		}
		else if (b[i] == '0')
		{
			a <<= 1;
		}
		i++;
	}
	return (a);
}
