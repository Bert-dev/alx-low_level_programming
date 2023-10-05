#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *read_textfile - read a text and print it content to POSIX standard output
 *@letters: number of letters to read and print
 *@filename: file to print from
 *return: the actual number of letters it could read and print, or 0 if it fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *print_field;
ssize_t fd;
ssize_t w;
ssize_t t;
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
print_field = malloc(sizeof(char) * letters);
t = read(fd, print_field, letters);
w = write(STDOUT_FILENO, print_field, t);
free(print_field);
close(fd);
return (w);
}
