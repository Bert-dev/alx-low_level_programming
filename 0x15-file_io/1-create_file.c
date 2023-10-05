#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: name of file to be readed
 * @text_content: the text inside the file.
 * Return: 1 success, otherwise 0
 */

int create_file(const char *filename, char *text_content)
{
ssize_t writeResult;
int file_descriptor;
if (filename == NULL)
{
return (-1);
}
int file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (file_descriptor == -1)
{
return (-1);
}
if (text_content != NULL)
{
ssize_t writeResult = write(file_descriptor, text_content,
strlen(text_content));
if (writeResult == -1)
{
close(file_descriptor);
return (-1);
}
}
close(file_descriptor);
return (1);
}
