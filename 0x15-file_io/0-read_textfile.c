#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- read text to be sent to standard output
 * @filename: variable for file to be manipulated
 * @letters: alphabet amount to count
 *
 * Return: amount of letters represented by bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *hid;
	ssize_t x;
	ssize_t y;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	hid = malloc(sizeof(char) * letters);
	y = read(fd, hid, letters);
	x = write(STDOUT_FILENO, hid, y);

	free(hid);
	close(fd);

	return (x);
}

