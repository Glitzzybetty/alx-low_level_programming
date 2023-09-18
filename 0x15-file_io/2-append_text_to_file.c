#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file.
 * @text_content: terminate strings added at the file end.
 *
 * Return: 1 on success . -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdocm;
	int strigns;
	int rwr;

	if (!filename)
		return (-1);

	fdocm = open(filename, O_WRONLY | O_APPEND);

	if (fdocm == -1)
		return (-1);

	if (text_content)
	{
		for (strigns = 0; text_content[strigns]; strigns++)
			;

		rwr = write(fdocm, text_content, strigns);

		if (rwr == -1)
			return (-1);
	}

	close(fdocm);

	return (1);
}
