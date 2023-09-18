#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. if It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdocm;
	ssize_t nrr, nwr;
	char *buf;

	if (!filename)
		return (0);

	fdocm = open(filename, O_RDONLY);

	if (fdocm == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrr = read(fdocm, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrr);

	close(fdocm);

	free(buf);

	return (nwr);
}
