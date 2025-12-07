#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: The name of the file
 * @text_content: The NULL-terminated string to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int len = 0;
	ssize_t wr;

	if (filename == NULL)
		return (-1);

	/* Open file without creating it */
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		wr = write(file, text_content, len);
		if (wr == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
