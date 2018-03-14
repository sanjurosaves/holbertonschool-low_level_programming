#include "holberton.h"
#include <stdlib.h>

/**
 * create_file - creates a file, and writes text_content to file
 * @text_content: NULL terminated string to write to the file
 * @filename: name of file to create
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC,
		  S_IRUSR | S_IWUSR);
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
