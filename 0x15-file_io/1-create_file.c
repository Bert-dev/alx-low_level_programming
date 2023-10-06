#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>

/**
 * create_file - creates a file
 * @filename: name of file to be readed
 * @text_content: the text inside the file.
 * Return: 1 success, otherwise 0
 */

int create_file(const char *filename, char *text_content)
{
int file_descriptor, w, len = 0;
if (filename == NULL)
{
return (-1);
}
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
w = write(file_descriptor, text_content, len);
if (file_descriptor == -1 || w == -1)
{
return (-1);
}
close(file_descriptor);
return (-1);
}
