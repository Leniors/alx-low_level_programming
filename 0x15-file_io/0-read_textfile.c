#include "main.h"

/**
 * read_textfilr - function
 * @filename: filename
 * @letters: number of bytes
 * Return: returns
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t _read;
	ssize_t written;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	_read = read(fd, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	written = write(STDOUT_FILENO, buffer, _read);
	if (written == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (_read);
}
