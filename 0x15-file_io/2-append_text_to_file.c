#include "main.h"

/**
 * append_text_to_file - adds content to EOF
 * @filename: ptr to name of file to be appended by additional text
 * @text_content: content to add to EOF
 *
 * Return: -1 if failed, else 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, x, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	x = write(i, text_content, count);

	if (i == -1 || x == -1)
		return (-1);

	close(i);

	return (1);
}
