#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * create_file - check the code
 * @filename: filename
 * @text_content: text_content
 * Return: Always 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC , S_IRUSR | S_IWUSR);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	w = write(fd, text_content, strlen(text_content));
	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);

}
