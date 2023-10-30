#include "main.h"
/**
 * read_textfile - Read a text file and print it to the POSIX standard output.
 *
 * @filename: The name of the file to be read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters successfully read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);
	int file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);
	char *buffer = malloc(letters);

	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}
	ssize_t bytes_reader = read(file_descriptor, buffer, letters);

	if (bytes_reader == -1)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}
	ssize_t file_write = write(STDOUT_FILENO, buffer, bytes_reader);

	if (file_write == -1 || file_write != bytes_reader)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}
	close(file_descriptor);
	free(buffer);
	return (bytes_reader);
}
