#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: contenet to writ
 * Return: returns an int
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written;
	int len = 0;

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}
	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	written = write(fd, text_content, len);
	if (written == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
