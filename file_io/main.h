#ifndef FILE_IO_MAIN_H
#define FILE_IO_MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int _putchar (char c);
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* FILE_IO_MAIN_H */
