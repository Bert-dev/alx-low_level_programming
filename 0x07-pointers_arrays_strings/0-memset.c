#include "main.h"

/**
 * _memset - fills memeory with constant byte.
 * @n:number of bytes.
 * @b:value to fill memory.
 * @s: pointer to memory
 * Return:new
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
*(s + 1) = b;
i++;
}
return (s);
}
