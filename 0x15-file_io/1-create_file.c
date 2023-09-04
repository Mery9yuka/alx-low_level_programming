#include "main.h"


/**
 * create_file - function that creates a file.
 * @filename: name of the file to be created.
 * @text_content: content to be written in the file
 *
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0, op, wr;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, i);
	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
