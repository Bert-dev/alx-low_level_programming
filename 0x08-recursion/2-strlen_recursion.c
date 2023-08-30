#include "main.h"
/**
 * _strlen_recursion: print  lenght of a string.
 * @s:source string.
 * return:string lenght;
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
