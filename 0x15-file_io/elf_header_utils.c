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
