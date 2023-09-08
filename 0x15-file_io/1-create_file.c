#include "main.h"

/**
 * create_file - Create file.
 * @filename: ptr to variable for file to be created.
 * @text_content: variable ptr for str that writes to the file
 *
 * Return: If the function fails , -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, x = 0;

	if (filename == 0)
		return (-1);

	if (text_content != 0)
	{
		for (x = 0; text_content[x];)
			x++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	i = write(fd, text_content, x);

	if (fd == -1 || i == -1)
		return (-1);

	close(fd);

	return (1);
}



