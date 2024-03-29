#include "main.h"

/**
 * append_text_to_file - append to afile
 * @filename: file name
 * @text_content: content to append
 * Return: an int
 */
int append_text_to_file(const char *filename, char *text_content)
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
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		written = write(fd, text_content, len);
		if (written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
