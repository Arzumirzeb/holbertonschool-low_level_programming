#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - check the code.
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	char n;

	for (n = 48; n <= 57; n++)
	{
		if (!(n == 50 || n == 52))
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
