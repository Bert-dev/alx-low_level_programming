#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of new memory array.
 * Return: the string initialized.
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
perror("Memory allocation failed\n");
exit(98);
}
return (ptr);
}
