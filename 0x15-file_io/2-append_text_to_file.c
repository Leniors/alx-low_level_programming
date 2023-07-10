#include "main.h"

/**
 * append_text_to_file - appends text
 * @filename: file name
 * @text_content
 * Return: intrger
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;
	int len = 0;

	if (filename == NULL)
		return (-1);
	while (text_content[len] != '\0')
	{
		len++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (textcotent != NULL)
	{
		w = write(fd, text_content, len);
		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
