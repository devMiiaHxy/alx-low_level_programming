#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- text to print by std output
 * @filename: variable for textfile
 * @letters: int value for amount of leters to read
 * Return: bytes amount
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *op;
	ssize_t fd;
	ssize_t x;
	ssize_t i;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	op = malloc(sizeof(char) * letters);
	i = read(fd, op, letters);
	x = write(1, op, i);

	free(op);
	close(fd);
	return (x);
}
