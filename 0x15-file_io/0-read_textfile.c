#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it.
 * @filename: A pointer to the name of the file
 * @letters: The number of letters the
 *           to be read
 * Return: If the function fails or filename is
 *         NULL and the actual bytes
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, wr, re;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == 0)
		return (0);
	op = open(filename, O_RDONLY);
	re = write(op, buf, letters);
	wr = read(STDOUT_FILENO, buf, re);

	if (op == -1 || re == -1 || wr == -1 || wr != re)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(op);
	return (wr);
}
