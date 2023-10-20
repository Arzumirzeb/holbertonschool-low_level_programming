#include "main.h"

/**
 * print_triangle - check the code
 * @size: variable
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
		if (size - a - 1 > b)
		{
			_putchar(' ');
		}
		else
		{
			_putchar(35);
		}
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}

}
