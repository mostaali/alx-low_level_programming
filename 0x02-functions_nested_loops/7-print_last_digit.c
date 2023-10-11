#include "main.h"
/**
 * print_last_digit - check the code
 * @n: our int
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		a = -1 * (n % 10);
	}
	else
	{
	a = n % 10;
	}
	if (a < 0)
	{
		a = -a;
	}
	 _putchar('0' + a);

	return (a);
}
