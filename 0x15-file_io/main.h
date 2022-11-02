#ifndef MAIN_H
#define MAIN_H

/*
 * Headers
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/*
 * Prototypes
 */

ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
#endif
