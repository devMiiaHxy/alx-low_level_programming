#include "main.h"

/**
 * append_text_to_file - adds text to EOF
 * @filename: ptr to file name
 * @text_content: variable for str to append to file
 *
 * Return: If the function fails or filename is NULL, -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int t, i, x = 0;

	if (filename == 0)
		return (-1);

	if (text_content != 0)
	{
		for (x = 0; text_content[x];)
			x++;
	}

	t = open(filename, O_WRONLY | O_APPEND);
	i = write(t, text_content, x);

	if (t == -1 || i == -1)
		return (-1);

	close(t);

	return (1);
}
