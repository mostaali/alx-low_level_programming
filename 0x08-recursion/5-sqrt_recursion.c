#include "main.h"

/**
 * _sqrt_recursion - math square root
 * @n: our main int
 * Return: returns the natural square root of a number
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
		return (math_square_root(n, 1));
	}
}

/**
 * math_square_root - math square root
 * @n: our main int
 * @i: our main int
 * Return: returns the natural square root of a number
 */
int math_square_root(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (math_square_root(n, i + 1));
	}
}
