#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char b = '0';

	for (a = 0; a < 10 ; a++)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
