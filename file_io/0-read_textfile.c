#include "main.h"

/**
 * read_textfile - Read a file and print its content
 * @filename: Name of the file
 * @letters: Number of characters to read
 *
 * Return: Number of characters printed, or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int rd;
	int wr;
	char *let;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	let = malloc(letters);
	if (let == NULL)
	{
		close(file);
		return (0);
	}

	rd = read(file, let, letters);
	if (rd == -1)
	{
		free(let);
		close(file);
		return (0);
	}

	wr = write(STDOUT_FILENO, let, rd);
	if (wr == -1 || wr != rd)
	{
		free(let);
		close(file);
		return (0);
	}

	free(let);
	close(file);

	return (wr);
}
