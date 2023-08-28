#include "main.h"
/*
 * main- A function that fills memory with a constant byte.
 * @b: value to fill the memory
 * @*s - pointer where the filling the memory will occur.
 * @n- lenght of buffer.
 * Return: Always 0;
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
*(s + i) = b;
i++;
}
return (s);
}
