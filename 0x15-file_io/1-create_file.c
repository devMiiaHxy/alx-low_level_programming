#include "main.h"

/**
 * create_file - new file is spunned
 * @filename: ptr to create_file value
 * @text_content: ptr to content of filename
 *
 * Return: -1 if failed, else 1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, x, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(fd, text_content, count);

	if (fd == -1 || x == -1)
		return (-1);

	close(fd);

	return (1);
}
