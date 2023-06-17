#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _elf_close - function closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If file cannot be closed - exit code 98.
 */
void _elf_close(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - function displays the information contained in the
	 * ELF header at the beginning of an ELF file.
 * @argc: The number of argument count supplied to the program.
 * @argv: An array of pointers to the argumentvector(arr value).
 *
 * Return: 0 Always on success.
 *
 * Description: If file is not ELF File or
 * the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int opn, rd;

	opn = open(argv[1], O_RDONLY);
	if (opn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = (Elf64_Ehdr *)malloc(sizeof(Elf64_Ehdr));

	if (header == NULL)
	{
		_elf_close(opn);

		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rd = read(opn, header, sizeof(Elf64_Ehdr));

	if (rd == -1)
	{
		free(header);
		_elf_close(opn);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	_elf_check(header->e_ident);
	printf("ELF Header:\n");
	_elf_magic(header->e_ident);
	_elf_class(header->e_ident);
	_elf_data(header->e_ident);
	_elf_version(header->e_ident);
	_elf_osabi(header->e_ident);
	_elf_abi(header->e_ident);
	_elf_type(header->e_type, header->e_ident);
	_elf_entry(header->e_entry, header->e_ident);
	free(header);
	_elf_close(opn);
	return (0);
}
