#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - check the code.
 * @n: variable
 * Return: 0
 */
void print_diagonal(int n)
{
	char a = '\\';
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
			{
				_putchar(a);
			}
			if (i <= j)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

	if (n <= 0) 
		_putchar('\n');
}
