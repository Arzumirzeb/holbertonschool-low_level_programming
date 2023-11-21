#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - function
 * @argc:
 * @argv:
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *op;

	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*op != '+' && *op != '-' && *op != '*' && *op != '/' && *op != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}
