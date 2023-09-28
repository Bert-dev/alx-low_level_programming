#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - translate number to unsigned int.
 * @b: pointer to the string of 0's and 1's
 * Return: an unsigned int number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
if (b == NULL)
return (0);
while (*b != '\0')
{
if (*b != '0' && *b != '1')
return (0);
result = result * 2 + (*b - '0');
b++;
}
return (result);
}
