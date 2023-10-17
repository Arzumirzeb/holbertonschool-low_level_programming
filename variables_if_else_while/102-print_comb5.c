#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, f, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (f = i; f <= 57; f++)
			{
				for (k = 48; k <= 57; k++)
				{
					if (f == i && k <= j)
					{
					continue;
					}
					{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(f);
					putchar(k);
					if (i < 57 || j < 56 || f < 57 || k < 57)
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
					putchar('\n');
					return (0);
}
