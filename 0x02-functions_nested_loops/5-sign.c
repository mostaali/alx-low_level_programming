#include "main.h"
/**
 * print_sign - check the code
 * @n: our ain int
 *
 * Return: 1 if n is greater than zero, 0 if zero, -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	elseif (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	elseif (n == 0)
	{
		_putchar('0');
		return (0);
	}
}
