#include"main.h"

/**
 * Desc - function that swaps the
 * values of two integers
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 * @swap_int:Swaps the values of two integers.
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
