#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: integer
 * @argv: char
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{

	if (argc <= 2)
	{
		printf("error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);

}
