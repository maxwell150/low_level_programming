#include "main.h"

/**
 * main - copy content of file to another file
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int fd1, fd2;
	int r, c1, c2;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((r = read(fd1, buffer, 1024)) > 0)
	{
		if (fd2 < 0 || (write(fd2, buffer, r) != r))
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	c1 = close(fd1);
	if (c1 < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1), exit(100);
	c2 = close(fd2);
	if (c2 < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd2), exit(100);
	return (0);
}
