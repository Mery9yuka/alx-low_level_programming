#include "main.h"
/**
 * main - program that copy the content of a file to another file
 * @argc: number of arguments for the program
 * @argv: array of string that hold arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_r, file_w, re, cr, cw;
	char buff[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_r = open(argv[1], O_RDONLY);
	if (file_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	while ((re = read(file_r, buff, BUFSIZ)) > 0)
	{
		if (file_w < 0 || write(file_w, buff, re) != re)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_r);
			exit(99);
		}
	}
	if (re < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cr = close(file_r);
	cw = close(file_w);
	if (cr < 0 || cw < 0)
	{
		if (cr < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_r);
		if (cw < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_w);
		exit(100);
	}
	return (0);
}
