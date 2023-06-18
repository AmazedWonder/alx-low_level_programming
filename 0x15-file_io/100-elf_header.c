#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _elf_check - Function checks for ELF file
 * @e_ident: pointer to unsigned char containing
 * array of the ELF magic numbers.
 *
 * Description: If file is not an ELF file - exit code 98
 */
void _elf_check(unsigned char *e_ident)
{
	int ind;

	for (ind = 0; ind < 4; ind++)
	{
		if (e_ident[ind] != 127 &&
				e_ident[ind] != 'E' &&
				e_ident[ind] != 'L' &&
				e_ident[ind] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * _elf_magic - Prints ELF header magic numbers.
 * @e_ident: A pointer to an array that contain
 * the ELF magic numbers.
 *
 * Description: Magic numbers of ELF.h are separated by spaces.
 */
void _elf_magic(unsigned char *e_ident)
{
	int indx;

	printf(" Magic: ");
	for (indx = 0; indx < EI_NIDENT; indx++)
	{
		printf("%02x", e_ident[indx]);
		if (indx == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * _elf_class - Prints an ELF header class
 * @e_ident: A pointer to an array that contains the ELF class.
 */
void _elf_class(unsigned char *e_ident)
{
	printf(" Class: ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * _elf_data - Prints an ELF header data
 * @e_ident: A pointer to an array that contains the ELF data
 */
void _elf_data(unsigned char *e_ident)
{
	printf(" Data: ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * _elf_version - Prints the version of an ELF header
 * @e_ident: A pointer to an array that contains the ELF version
 */
void _elf_version(unsigned char *e_ident)
{
	printf(" Version: %d",
			e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * _elf_osabi - Prints the OS/ABI(operating system/application binary
 * interface) of an ELF header.
 * @e_ident: A pointer to an array that contains the ELF version
 * Executable and Linkable Format
 */
void _elf_osabi(unsigned char *e_ident)
{
	printf(" OS/ABI: ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * _elf_abi - Prints the ABI(Application Binary Interface)
 * version of an ELF header
 * @e_ident: A pointer to unsigned char array  that
 * contains the ELF ABI version.
 */
void _elf_abi(unsigned char *e_ident)
{
	printf(" ABI Version: %d\n",
			e_ident[EI_ABIVERSION]);
}

/**
 * _elf_type - Prints an ELF header type.
 * @e_type: The ELF type.
 * @e_ident: A pointer to unsigned char array that
 * contains the ELF class
 */
void _elf_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf(" Type: ");

	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}

/**
 * _elf_entry - Prints the entry point of an ELF header.
 * @e_entry: Address of the ELF entry point.
 * @e_ident: A pointer to unsigned char array that
 * contains the ELF class.
 */
void _elf_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entry point address: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * _elf_close - function closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If file cannot be closed - exit code 98.
 */
void _elf_close(int elf)
{
	if (close(elf) == -1)
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf);
	exit(98);
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
		free(header);
	_elf_close(opn);
	dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
	exit(98);

	_elf_check(header->e_ident);
	/*	_elf_close(opn);*/
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
