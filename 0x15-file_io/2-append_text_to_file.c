#include "main.h"

/**
 * append_text_to_file - function appends text at the end of a file
 * @filename: A pointer to cont char/name of the file
 * @text_content: is the NULL terminated string to add
 * to the end of the file
 *
 * Return: 1 on success and -1 on failure
 *	If filename is NULL return -1
 *	 1 if the file exists and -1 if the file does not exist or
 * if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int open_file, len = 0;
	ssize_t written_bytes;

	if (filename == NULL)
		return (-1);

	/*if (text_content != NULL)*/
	/*{*/
	/*	for (; text_content[len];)*/
	/*		len++;*/
	/*}*/

	open_file = open(filename, O_WRONLY | O_APPEND);

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len])
			len++;
	}
	written_bytes = write(open_file, text_content, len);

	if (open_file == -1 || written_bytes == -1)
		return (-1);

	close(open_file);

	return (1);
}
