#include <stdio.h>

/**
 * print_to_98 - print the code
 * @n: variable
 * Return: Print all natural number.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
		printf("%d\n", n);
}
