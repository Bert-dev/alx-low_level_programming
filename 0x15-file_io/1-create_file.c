#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: name of file to be read
 * @text_content: the text inside the file.
 * Return: 1 success, otherwise 0
 */

int create_file(const char *filename, char *text_content)
{
int file, wrote;
if (filename == NULL)
return (-1);
file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (file == -1)
return (-1);
if (text_content != NULL)
{
wrote = write(file, text_content, strlen(text_content));
if (wrote == -1)
{
close(file);
return (-1);
}
close(file);
return (1);
}
else
{
close(file);
return (1);
}
}
