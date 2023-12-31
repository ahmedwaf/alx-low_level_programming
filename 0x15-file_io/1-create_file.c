#include "main.h"
#include <string.h>
/**
 * create_file - Create a file with the specified permissions.
 *
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file.
 *
 * Return:
 * - 1 on success.
 * - -1 on failure (file cannot be created, file cannot be written.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytes_written = write(file_descriptor, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);

	return (1);
}
