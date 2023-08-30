#include "main.h"
/**
 * _sqrt_recursion - return the sqrt of a natural number.
 * @n: natural number
 * Return: sqrt 0 if sqrt is not natural.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_manual(n, 1));
	}
}
