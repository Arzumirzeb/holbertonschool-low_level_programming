#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int a, i;

	for (i = 0; i < 10; i++)
	{
		for (a = 97; a < 123; a++)
		{
			_putchar(a);	
		}
		 _putchar('\n');
	}
}
