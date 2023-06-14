#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_buffer(char *file);
void _close(int fd);

/**
 * _buffer - function allocates 1024 bytes,for a buffer
 * @file: the file that uses the buffer to stor chars or string
 *
 * Return: A pointer to the newly-allocated buffer
 */

char *_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);

		exit(99);
	}

	return (buffer);
}


/**
 * _close - function that closes file descripto
 * @fd: file descriptor
 */

void _close(int fd)
{
	int file;

	file = close(fd);

	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);

		exit(100);
	}
}


/**
 * main - Copies contents of a file to another file
 * @argc: The number of arguments count
 * @argv: An array of pointers / arguments vector
 * Return: 0 on success.
 * Description: If the number of argument is not the correct one
 *	- exit code 97.
 *	If file_from does not exist or cannot be read - exit code 98
 *	If cannot create or write to file_to fails- exit code 99.
 *	If can not close a file descriptor - exit code 100.
 */

int main(int argc, char *argv[])
{

	int file_from, file_to, r, w;
	char *buffer;


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");

		exit(97);
	}

	buffer = _buffer(argv[2]);

	file_from = open(argv[1], O_RDONLY);

	r = read(file_from, buffer, 1024);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);


	do {
		if (file_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(file_to, buffer, r);

		if (file_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);

			free(buffer);

			exit(99);

		}

		r = read(file_from, buffer, 1024);

		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);

	_close(file_from);
	_close(file_to);

	return (0);

}
