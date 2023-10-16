#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, f;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (f = j + 1; f <= 57; f++)
			{
				putchar(i);
				putchar(j);
				putchar(f);
				if (i < 56 || j < 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
