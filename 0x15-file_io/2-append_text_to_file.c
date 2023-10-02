#include "main.h"

/**
 * append_text_to_file - appends text at the end of an existing file
 * @filename: filename of the file.
 * @text_content: contents to be added.
 *
 * Return: 1 if file existed. -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(file);

	return (1);
}
