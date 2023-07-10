#include "main.h"

/**
 * create_file - creates file
 * @filename: file name
 * @text_content: string
 * Return: returns an integer
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int num;
	int len = 0;

	if (filename == NULL)
		return (-1);
	while (*text_content != '\0')
	{
		len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	num = write(fd, text_content, len);
	if (num == -1)
	{
		close(fd);
		return (-1);
	}
	return (1);
}
