#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - check the code
 * @filename: filename
 * @text_content: text
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (!filename)
		return (-1);
	fd = open(fillename, O_RDONLY | O_CREAT | O_APPEND);
	if (!text_content)
	{
		close(fd);
		return (1);
	w = (fd, text_content, strlen(text_content));
	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
