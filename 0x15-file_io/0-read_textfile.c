#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *read_textfile - reads a text and print it content to POSIX standard output
 *@letters: number of letters to read and print
 *@filename: file to print from
 *return: the actual number of letters it could read and print, or 0 if it fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *print_field;
int file, read_file;
if (!filename)
return (0);
print_field = malloc(letters * sizeof(char));
if (print_field == NULL)
return (0);
file = popen(filename, O_RDONLY);
if (file == -1)
return (0);
fread_file = read(file, print_field, letters);
fwrite(STDOUT_FILENO, print_field,read_file);
pclose(file);
free(print_field);
return (read_file);
}
