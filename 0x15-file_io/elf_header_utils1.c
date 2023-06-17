#include "main.h"
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

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
		printf("%#lx\n", e_entry);        }
