#include "main.h"
/**
 * _abs - check the code
 * @n: our ain int
 *
 * Return: +n if n is greater than zero,-n if less than zero
 */
int _abs(int n)
{
	int a;

	if (n < 0)
	{
		a = -n;
	}
	else
	{
		a = n;
	}

	return (a);
}
