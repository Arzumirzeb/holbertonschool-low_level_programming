#include <unistd.h>
#include <fcntl.h>
#include<stdio.h>
#include <stdlib.h>
/**
 * copy_file - copy from file1 to file2
 * @file1: file1
 * @file2: file2
 * Return: Success
 */
void copy_file(const char *file1, const char *file2)
{
	int from, to, r, w;
	char buf[1024];

	from = open(file1, O_RDONLY);
	if (from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
		exit(98);
	}
	to = open(file2, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	r = read(from, buf, 1024);
	w = write(to, buf, r);
	if (r != w || to == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file2);
		exit(99);
	}
	if (r == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
		exit(98);
	}
	if (close(from) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE%d\n", from);
		exit(100);
	}
	if (close(to) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE%d\n", to);
		exit(100);
	}
}
/**
 * main - check the code
 * @argc: argc
 * @argv: argv
 * Return: Success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	exit(0);
}
