#ifndef FILE_IO_MAIN_H
#define FILE_IO_MAIN_H

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar (char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif /* FILE_IO_MAIN_H */
