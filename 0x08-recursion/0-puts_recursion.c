#include "main.h"
/**
 * _puts_recursion -  prints a string
 * @s: source string.
 * return : 0;
 */
void _puts_recursion(char *s)
{
if (*s == 0)
{
_putchar ("\n");
}
else
{
_putchar(*s);
_putchar(s + 1);
}
}
