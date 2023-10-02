#include "main.h"

/**
 * create_file - creates a new file
 * @filename: filename of the file.
 * @text_content: content to be written in the file.
 *
 * Return: returns 1 on success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(file, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(file);

	return (1);
}
