#include "main.h"

/**
 * append_text_to_file - appends text at end of file
 * @filename: ptr to filename
 * @text_content: str to append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	register int fd, w, len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
		w = write(fd, text_content, len);
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
