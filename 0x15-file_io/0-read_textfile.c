#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename of the file.
 * @letters: count of letters printed.
 *
 * Return: returns numbers of letters printed. It fails 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t nrd, nwr;
	char *buffer;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nrd = read(file, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nrd);

	close(file);

	free(buffer);

	return (nwr);
}
