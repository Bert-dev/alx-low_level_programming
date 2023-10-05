#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *read_textfile - read text file and print to STDOUT
 *@letters: number of letters to read and print
 *@filename: file to read  from
 * Return: w- the actual number of byte read and print 0 if it fail
 *or filename is NULL
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
