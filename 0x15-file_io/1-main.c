#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 *
 */
int create_file(const char *filename, char *text_content)
{
	int bytes_written;
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
	{
		return (-1);
	}
	bytes_written = write(fd, text_content, strlen(text_content));
	if (bytes_written < 0) {
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}
