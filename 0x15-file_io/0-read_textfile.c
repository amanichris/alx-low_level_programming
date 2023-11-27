#include "main.h"

/**
 * read_textfile -> fun that reads a text file and prints it to standard output
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdir;
	ssize_t lolr, lolw;
	char *buffer;

	if (!filename)
		return (0);

	fdir = open(filename, O_RDONLY);

	if (fdir == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	lolr = read(fdir, buffer, letters);
	lolw = write(STDOUT_FILENO, buffer, lolr);

	close(fdir);

	free(buffer);

	return (lolw);
}
