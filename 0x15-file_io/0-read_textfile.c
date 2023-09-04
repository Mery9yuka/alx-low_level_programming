#include "main.h"


/**
 * read_textfile - function that read a text file
 *                 & print it to the POSIX stdout.
 * @filename: pointer to name of file.
 * @letters: number of letters the function must read & print.
 * Return: 0 if fails to open or read,
 *         or it does not o/w the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *b;

	if (filename == NULL)
		return (0);

	b = malloc(sizeof(char) * letters);
	if (b == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, b, letters);
	wr = write(STDOUT_FILENO, b, re);

	if (op == -1 || re == -1 || wr == -1 || wr != re)
	{
		free(b);
		return (0);
	}

	free(b);
	close(op);

	return (wr);
}
