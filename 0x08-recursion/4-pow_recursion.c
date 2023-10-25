#include "main.h"

/**
 * _pow_recursion - math power
 * @x: our main int
 * @y: our main power int
 * Return: returns the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0 || x == 1)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else if (x < 0 && y % 2 != 0)
	{
		return (-(_pow_recursion(-x, y)));
	}

	return (x * _pow_recursion(x, y - 1));
}
