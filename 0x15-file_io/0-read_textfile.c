#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- Reads  a text file and prints it
 * to the POSIX standard output
 * @filename: text file being read
 * @letters: number of letters it should read and print
 * Return: w- the actual number of letters it could read and print
 *	if the file can not be opened or read, return 0
 *	0 when function fails or filename is NULL
 *	if write fails or does not write the expected
 * amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t written_bytes;
	ssize_t read_bytes;


	fd = open(filename, O_RDONLY);

	if (fd == -1)

		return (0);

	buf = malloc(sizeof(char) * (letters + 1));

	read_bytes = read(fd, buf, letters);
	if (read_bytes == 0)
		return (0);

	written_bytes = write(STDOUT_FILENO, buf, read_bytes);

	free(buf);

	close(fd);
	if (written_bytes != read_bytes)
	{
		return (0);
	}

	return (written_bytes);

}
