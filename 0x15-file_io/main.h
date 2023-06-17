#ifndef MAIN_H
#define MAIN_H


#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int _putchar(char c);

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);


void _elf_check(unsigned char *e_ident);
void _elf_magic(unsigned char *e_ident);
void _elf_class(unsigned char *e_ident);
void _elf_data(unsigned char *e_ident);
void _elf_version(unsigned char *e_ident);
void _elf_osabi(unsigned char *e_ident);
void _elf_abi(unsigned char *e_ident);
void _elf_type(unsigned int e_type, unsigned char *e_ident);
void _elf_entry(unsigned long int e_entry, unsigned char *e_ident);
void _elf_close(int elf);


#endif/*MAIN_H*/
