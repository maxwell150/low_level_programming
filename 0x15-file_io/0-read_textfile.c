#include "main.h"

/**
 * read_textfile - reads a file and prints it to the
 * POSIX std output
 * @filename: ptr to filename
 * @letters: bytes
 * Return: actual bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	register int fd, r, w;
	char *buffer = NULL;

	if (!filename)
		return (0);
	buffer = malloc(letters + 1);
	if (!buffer)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	r = read(fd, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	buffer[letters] = '\0';
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (w);
}
