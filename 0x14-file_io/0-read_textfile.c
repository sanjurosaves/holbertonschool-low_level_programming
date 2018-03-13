#include "holberton.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @letters: number of letters function should read and print
 * @filename: filename passed from argv[1]
 * Return: number of letters that were read and printed; 0 upon failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int retVal, fd, bytes;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	bytes = read(fd, buf, letters);
	if (bytes == -1)
		return (0);

	retVal = write(1, buf, bytes);
	if (retVal == -1)
		return (0);

	close(fd);

	free(buf);

	return (retVal);
}
