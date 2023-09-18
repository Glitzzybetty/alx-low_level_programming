#include "main.h"

/**
 * create_file - a function that create a file.
 * @filename: name of file created.
 * @text_content: null terminated string written to file.
 *
 * Return: 1 on success. -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fdocm;
	int nstrigns;
	int rww;

	if (!filename)
		return (-1);

	fdocm = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fdocm == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nstrigns = 0; text_content[nstrigns]; nstrigns++)
		;

	rww = write(fdocm, text_content, nstrigns);

	if (rww == -1)
		return (-1);

	close(fdocm);

	return (1);
}
