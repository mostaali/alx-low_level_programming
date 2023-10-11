#include "main.h"
/**
 * print_sign - check the code
 * @n: our ain int
 *
 * Return: 1 if n is greater than zero, 0 if zero, -1 if less than zero
 */
int print_sign(int n)
{
	int a;

	if (n > 0)
	{
		_putchar('+');
		a = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		a = -1;
	}
	else if (n == 0)
	{
		_putchar('0');
		a = 0;
	}

	return (a);
}
