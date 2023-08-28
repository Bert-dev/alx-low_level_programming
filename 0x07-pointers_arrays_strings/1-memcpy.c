#include "main.h"
/**
 * _memcpy - Copies memeory area.
 *@dest: source.
 *@src: for filling.
 *@n:lenght.
 *Return: new.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
*(dest + 1) = *(src + 1);
i++;
}
return (dest);
}
