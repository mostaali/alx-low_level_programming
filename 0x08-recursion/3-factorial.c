#include "main.h"

/**
 * factorial - gets factorial of a given number
 * @n: our main int
 * Return:  returns factorial of a given number
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
