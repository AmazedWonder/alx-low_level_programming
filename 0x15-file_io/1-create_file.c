#include "main.h"

/**
 * create_file - function that creates a file
 * @filename:  is the name of the file to create/pointer
 * @text_content: A pointer to a string to write to the file.
 * is a NULL terminated string to write to thefile
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 *	if filename is NULL return -1
 *	if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, written_bytes;

	if (filename == NULL)
		return (-1);


	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	written_bytes = write(fd, text_content, len);

	if (fd == -1 || written_bytes == -1)
		return (-1);

	close(fd);

	return (1);
}
