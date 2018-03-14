#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @text_content: NULL terminated string to write to the file
 * @filename: name of file to write to
 * Return: 1 upon success, -1 upon failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		;
	else
	{
	for (len = 0; text_content[len] != '\0'; len++)
		;

	write(fd, text_content, len);
	}

	close(fd);

	return (1);
}
