#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
int main(int argc, char *argv[]);
#define ELF_HEADER_SIZE 64
#define ERROR "Error: can't read from file %s\n"
#define ERR "Error: can't write to %s/n"
#endif
