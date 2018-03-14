#include "holberton.h"

/**
 * main - emulation of linux cp command
 * @argv: argv[1] is source file to be copied, argv[2] is destination file
 * @argc: argument count
 * Return: 0 upon success, 97-100 upon failure
 */
int main(int argc, char **argv)
{
	int rfd, wfd, rclose, wclose, remain, writ; char buffer[1024]; char *bp;

	if (argc != 3)
	{ dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"); exit(97); }

	rfd = open(argv[1], O_RDONLY);
	if (rfd == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]); exit(98); }

	wfd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
		   S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (wfd == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]); exit(99); }

	while (1)
	{
		remain = read(rfd, buffer, 1024);
		if (remain > 0)
		{
			bp = buffer;
			while (remain > 0)
			{
				writ = write(wfd, bp, remain);
				remain -= writ;
				bp += writ;
			}
		}
		else if (remain == 0)
			break;
	}

	rclose = close(rfd);
	if (rclose == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close %d\n", rfd); exit(100); }

	wclose = close(wfd);
	if (wclose == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close %d\n", wfd); exit(100); }

	return (0);
}
