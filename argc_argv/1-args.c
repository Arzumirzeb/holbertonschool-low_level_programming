#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 * @argc: integer
 * @argv: char
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	(void) **argv;
	printf("%d\n", argc - 1);
	return (0);
}
